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

from interface.msg import Ultrasonic

# Importing modules and classes
import time
from gpiozero import DigitalInputDevice, DigitalOutputDevice

# Defining sensor class
class UltraSonicDriver:
  
    def __init__(self, echo, trigger):
        # Assingning ultrasonic sensor echo and trigger GPIO pins
        self._usoundecho = DigitalInputDevice(echo)
        self._usoundtrig = DigitalOutputDevice(trigger)
        # Assigning speed of sound (cm/s)
        self.speedofsound = 34300
    
    @property
    def distance(self):
        # Sending trigger pulse (~10 us)
        self._usoundtrig.on()
        time.sleep(0.000010)
        self._usoundtrig.off()
        # Detecting echo pulse start
        restart_count = 0
        while self._usoundecho.value == 0:
            restart_count += 1
            if restart_count == 10000:
                # print("Restart")
                return self.distance
            continue
        trise = time.perf_counter()
        # Detecting echo pulse end
        while self._usoundecho.value == 1:
            continue
        tfall = time.perf_counter()
        # prevent error
        if tfall == 0 or trise == 0:
            return self.distance
        # Returning distance (cm)
        return 0.5 * (tfall-trise) * self.speedofsound

    @distance.setter
    def distance(self, _):
        print('"distance" is a read only attribute.')

    def __del__(self):
        self._usoundecho.close()
        self._usoundtrig.close()

class UltrasonicSensorPublisher(Node):

    def __init__(self):
        super().__init__('ultrasonic_sensor_node')
        self.publisher_ = self.create_publisher(Ultrasonic, 'driver/sensor/ultrasonic', 10)
        timer_period = 1/30  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.usensor = UltraSonicDriver(echo=6, trigger=5)

    def timer_callback(self):
        msg = Ultrasonic()
        msg.distance = self.usensor.distance
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing: "{msg.distance}"')


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = UltrasonicSensorPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()