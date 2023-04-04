from gpiozero import DigitalOutputDevice, PWMOutputDevice  # TODO pwm for motor
import time


class MotorDriver:

    def __init__(self, enable1=None, enable2=None, pwm1=None, pwm2=None):

        # Identifying motor driver type and assigning appropriate GPIO pins
        if pwm1 and pwm2:
            # Driver with 1 enable and 2 PWM inputs
            # Example: SN754410 quadruple half-H driver chip
            if not enable1:
                raise Exception('"enable1" pin is undefined.')
            self._dualpwm = True
            self._enable1 = DigitalOutputDevice(enable1)
            self._pwm1 = PWMOutputDevice(pwm1)
            self._pwm2 = PWMOutputDevice(pwm2)
        elif enable1 and enable2:
            # Driver with 2 enables and 1 PWM input
            # Example: L298 dual H-bridge motor speed controller board
            if not pwm1:
                raise Exception('"pwm1" pin is undefined.')
            self._dualpwm = False
            self._enable1 = DigitalOutputDevice(enable1)
            self._enable2 = DigitalOutputDevice(enable2)
            self._pwm1 = PWMOutputDevice(pwm1)
        else:
            raise Exception('Pin configuration is incorrect.')
        # Initializing output value
        self._value = 0

    def __del__(self):

        # Releasing GPIO pins
        if self._dualpwm:
            self._enable1.close()
            self._pwm1.close()
            self._pwm2.close()
        else:
            self._enable1.close()
            self._enable2.close()
            self._pwm1.close()

    @property
    def value(self):
        return self._value

    @value.setter
    def value(self, _):
        print('"value" is a read only attribute.')

    def set_output(self, output, brake=False):

        # Limiting output
        if output > 1:
            output = 1
        elif output < -1:
            output = -1
        # Forward rotation
        if output > 0:
            if self._dualpwm:
                self._enable1.on()
                self._pwm1.value = output
                self._pwm2.value = 0
            else:
                self._enable1.on()
                self._enable2.off()
                self._pwm1.value = output
        # Backward rotation
        elif output < 0:
            if self._dualpwm:
                self._enable1.on()
                self._pwm1.value = 0
                self._pwm2.value = -output
            else:
                self._enable1.off()
                self._enable2.on()
                self._pwm1.value = -output
        # Stop motor
        elif output == 0:
            if brake:
                if self._dualpwm:
                    self._enable1.off()
                    self._pwm1.value = 0
                    self._pwm2.value = 0
                else:
                    self._enable1.off()
                    self._enable2.off()
                    self._pwm1.value = 0
            else:
                if self._dualpwm:
                    self._enable1.on()
                    self._pwm1.value = 0
                    self._pwm2.value = 0
                else:
                    self._enable1.on()
                    self._enable2.on()
                    self._pwm1.value = 0
        # Updating output value property
        self._value = output


if __name__ == "__main__":
    # Creating motor object using GPIO pins 16, 17, and 18
    # (using SN754410 quadruple half-H driver chip)
    motor_left = MotorDriver(enable1=21, pwm1=16, pwm2=20)
    motor_right = MotorDriver(enable1=26, pwm1=13, pwm2=19)

    for _ in range(10):
        motor_left.set_output(1)
        motor_right.set_output(1)
        time.sleep(2)
        motor_left.set_output(-1)
        motor_right.set_output(-1)
        time.sleep(2)

    # Stopping motor and releasing GPIO pins

    motor_left.set_output(0, brake=True)
    motor_right.set_output(0, brake=True)
    del motor_left, motor_right
