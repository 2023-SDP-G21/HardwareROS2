import serial
import time
import adafruit_bno055
import numpy as np


class IMUDriver:

    def __init__(self):
        self.serial_port = serial.Serial("/dev/serial0")
        self.sensor = self.__init_sensor()

    def __init_sensor(self):
        while True:
            try:
                self.serial_port.close()
                self.serial_port.open()
                return adafruit_bno055.BNO055_UART(self.serial_port)
            except:
                time.sleep(0.02)
                continue

    def acceleration(self):
        """
        return 3 dim acceleration
        """
        while True:
            try:
                self.serial_port.close()
                self.serial_port.open()
                result = self.sensor.acceleration
            except:
                time.sleep(0.05)
                continue
            if type(result) == tuple:
                return result
            else:
                continue

    def quaternion(self):
        """
        return 3 dim rotation
        """
        while True:
            try:
                result = self.sensor.quaternion
            except:
                self.serial_port.close()
                self.serial_port.open()
                time.sleep(0.05)
                continue
            if type(result) == tuple:
                return result
            else:
                continue

    def tan_acceleration(self):
        while True:
            try:
                quaternion = self.sensor.quaternion
                acceleration = self.sensor.acceleration

                # Define the 3D acceleration vector
                a = np.array(acceleration)

                # print(a)

                # Define the quaternion
                q = np.array(quaternion)  # (w, x, y, z)

                # print(q)

                # Compute the rotation matrix from the quaternion
                R = np.array([[1-2*(q[2]**2+q[3]**2), 2*(q[1]*q[2]-q[0]*q[3]), 2*(q[1]*q[3]+q[0]*q[2])],
                              [2*(q[1]*q[2]+q[0]*q[3]), 1-2 *
                               (q[1]**2+q[3]**2), 2*(q[2]*q[3]-q[0]*q[1])],
                              [2*(q[1]*q[3]-q[0]*q[2]), 2*(q[2]*q[3]+q[0]*q[1]), 1-2*(q[1]**2+q[2]**2)]])

                # Apply the rotation to the acceleration vector
                a_rotated = np.dot(R, a)

                return a_rotated
            except:
                time.sleep(0.05)


if __name__ == "__main__":
    imu = IMUDriver()
    for i in range(30):
        print(imu.tan_acceleration())
        time.sleep(1)
    del imu
