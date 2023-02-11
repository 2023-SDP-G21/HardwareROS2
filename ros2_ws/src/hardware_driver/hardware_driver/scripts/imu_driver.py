import serial
import time
import adafruit_bno055


class IMUDriver:
    
    def __init__(self):
        self.sensor = adafruit_bno055.BNO055_UART(serial.Serial("/dev/serial0"))

    def acceleration(self):
        """
        return 3 dim acceleration
        """
        try:
            result = self.sensor.acceleration
        except Exception:
            time.sleep(0.01)
            result = self.acceleration()
        if type(result) == list:
            return result
        else:
            return self.acceleration()


if __name__=="__main__":
    imu = IMUDriver()
    while True:
        print(imu.acceleration())
        time.sleep(1/60)