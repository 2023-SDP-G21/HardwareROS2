# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy
from rclpy.node import Node
import time
import numpy as np
import math

from interface.msg import IMU, Motor

from .scripts.imu_driver import IMUDriver

TOTAL_MOTOR_W = 19.8 * 2  # w
MASS = 20  # kg
TOTAL_FORWARD_FORCE = 735  # N


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('imu_sensor_node')
        self.subscription = self.create_subscription(
            Motor,
            'driver/actuator/motor',
            self.callback,
            1)

        self.publisher_ = self.create_publisher(
            IMU, 'driver/sensor/imu', 1)

        timer_period = 1/10  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

        timer_period = 1/1  # seconds
        self.timer_publisher = self.create_timer(
            timer_period, self.timer_publisher_callback)

        self.imu = IMUDriver()
        self.__velocity = 0
        self.__horizontal_a = 0
        self.__motor_power = TOTAL_MOTOR_W
        self.__time = time.perf_counter()
        self.__km = KalmanFilter(MASS, TOTAL_MOTOR_W, TOTAL_FORWARD_FORCE)

    def callback(self, msg):
        self.get_logger().info(
            f'I heard motor value: "{msg.motor_left_power, msg.motor_right_power}"')
        self.__motor_power = TOTAL_MOTOR_W * \
            (msg.motor_left_power + msg.motor_right_power) / 2

    def timer_callback(self):
        imu_reading = self.imu.tan_acceleration()
        # self.get_logger().info(f'Read imu reading: "{imu_reading}"')
        self.get_velocity(*imu_reading)

    def timer_publisher_callback(self):
        msg = IMU()
        msg.velocity = self.__velocity
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing imu value: "{msg.velocity}"')

    def get_velocity(self, ax, ay, az):
        time_start = self.__time
        self.__horizontal_a = math.sqrt(ax**2 + ay**2)
        self.__time = time.perf_counter()

        self.__km.update(self.__motor_power, self.__horizontal_a, self.__time)

        self.__velocity = self.__km.get_velocity()
        return self.__velocity


class KalmanFilter:
    def __init__(self, mass, max_power, max_force):
        # Define the system state
        self.x = np.array([0.0, 0.0])  # position and velocity (in 1D)

        # Define the observation matrix
        # motor power to acceleration conversion factor
        self.B = np.array([max_force / mass / max_power, 0.0])
        self.C = np.array([[0.0, 1.0]])

        # Define the process noise and measurement noise covariances
        # process noise covariance
        self.Q = np.array([[1e-5, 0.0], [0.0, 1e-3]])
        self.R = np.array([[1.0]])  # measurement noise covariance

        # Initialize the error covariance
        self.P = np.eye(2)

    def update(self, motor_power, imu_acceleration, dt):
        # Define the state transition matrix
        self.A = np.array([[1.0, dt], [0.0, 1.0]])

        # Prediction step
        self.x = self.A.dot(self.x) + self.B * motor_power
        self.P = self.A.dot(self.P).dot(self.A.T) + self.Q

        # Update step
        K = self.P.dot(self.C.T).dot(np.linalg.inv(
            self.C.dot(self.P).dot(self.C.T) + self.R))
        self.x = self.x + K.dot(imu_acceleration - self.C.dot(self.x))
        self.P = (np.eye(2) - K.dot(self.C)).dot(self.P)

    def get_velocity(self):
        return self.x[1]


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
