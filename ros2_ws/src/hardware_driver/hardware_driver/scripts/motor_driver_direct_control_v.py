import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)


class MotorDriver:

    def __init__(self, forward: int, backward: int):
        self.forward = forward
        GPIO.setup(forward, GPIO.OUT)
        self.backward = backward
        GPIO.setup(backward, GPIO.OUT)

    def set_output(self, output, brake=False):
        if output > 0.2:
            GPIO.output(self.forward, GPIO.HIGH)
            GPIO.output(self.backward, GPIO.LOW)
        elif output < -0.2:
            GPIO.output(self.forward, GPIO.LOW)
            GPIO.output(self.backward, GPIO.HIGH)
        else:
            GPIO.output(self.forward, GPIO.LOW)
            GPIO.output(self.backward, GPIO.LOW)


if __name__ == "__main__":
    # Creating motor object using GPIO pins 16, 17, and 18
    motor_left = MotorDriver(forward=16, backward=20)
    motor_right = MotorDriver(forward=13, backward=19)

    for _ in range(10):
        motor_left.set_output(1)
        motor_right.set_output(1)
        time.sleep(5)

    # Stopping motor and releasing GPIO pins

    motor_left.set_output(0, brake=True)
    motor_right.set_output(0, brake=True)
    del motor_left, motor_right
