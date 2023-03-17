import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)


class LedDriver:

    def __init__(self, pin: int) -> None:
        GPIO.setup(pin, GPIO.OUT)
        GPIO.output(pin, GPIO.HIGH)
        self.pin = pin

    def turn_on_led(self):
        GPIO.output(self.pin, GPIO.LOW)
        time.sleep(0.25)

    def turn_off_led(self):
        GPIO.output(self.pin, GPIO.HIGH)
        time.sleep(0.25)

    def led_blink(self):
        self.turn_on_led()
        self.turn_off_led()


if __name__ == '__main__':
    led_driver_l1 = LedDriver(17)
    led_driver_l2 = LedDriver(27)
    led_driver_l3 = LedDriver(22)

    for i in range(10):
        led_driver_l1.led_blink()
        # led_driver_l2.led_blink()

    led_driver_l2.turn_off_led()
    led_driver_l1.turn_off_led()
