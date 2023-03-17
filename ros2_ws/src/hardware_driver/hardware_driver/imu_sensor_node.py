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

from interface.msg import Acceleration

from .scripts.imu_driver import IMUDriver

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('imu_sensor_node')
        self.publisher_ = self.create_publisher(Acceleration, 'driver/sensor/imu', 10)
        timer_period = 1/30  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.imu = IMUDriver()

    def timer_callback(self):
        msg = Acceleration()
        imu_reading = self.imu.acceleration()
        msg.acceleration_x = imu_reading[0]
        msg.acceleration_y = imu_reading[1]
        msg.acceleration_z = imu_reading[2]
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing imu value: "{msg.acceleration_x, msg.acceleration_y, msg.acceleration_z}"')

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