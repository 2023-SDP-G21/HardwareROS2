# server = TCP()
# server.run()

import rclpy
import time
from rclpy.node import Node

from interface.msg import Information, Objective, Battery

from .scripts.message_generation import MessageGeneration
from .scripts.Bluetooth import Bluetooth


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('local_planner')
        self.publisher = self.create_publisher(
            Objective, 'hardware_server/socket/objective', 10)

        timer_period = 1/10
        self.timer_receive = self.create_timer(
            timer_period, self.timer_receive_callback)

        timer_period = 1/5
        self.timer_send = self.create_timer(
            timer_period, self.timer_send_callback)

        self.subscription_information = self.create_subscription(
            Information,
            'central_point/safety_guard/info',
            self.callback_information,
            10)

        self.subscription_battery = self.create_subscription(
            Battery,
            'driver/sensor/battery',
            self.callback_battery,
            10)

        # while True:
        self.socket = Bluetooth()
        self.socket.run()

        self.emergency_stop = False
        self.battery_low = False
        self.velocity = 0
        self.battery_level = 0

    def callback_information(self, msg):
        self.get_logger().info(
            f'I heard info value: "{msg.emergency_stop}, {msg.velocity}"')
        self.emergency_stop = msg.emergency_stop
        self.battery_low = msg.battery_low
        self.velocity = msg.velocity

    def callback_battery(self, msg):
        self.battery_value = msg.level
        self.get_logger().info(f'I heard battery sensor value: "{self.level}"')

    def timer_receive_callback(self):
        msg = Objective()
        receive_data = None
        while not receive_data:
            receive_data = self.socket.receive_data()

        angle, power = receive_data[-1]
        # power recieved is 0 - 100, we need it 0 - 1
        msg.power, msg.angle = (float(power/100), float(angle))
        # msg.power, msg.angle = (float(1), float(45))
        self.publisher.publish(msg)
        self.get_logger().info(
            f'Publishing objective: "{msg.power}, {msg.angle}"')

    def timer_send_callback(self):
        if self.emergency_stop:
            message = MessageGeneration.generate_warning_data(1)
        elif self.battery_low:
            message = MessageGeneration.generate_warning_data(6)
        else:
            message = MessageGeneration.generate_sensor_data(
                int(self.velocity*10), self.battery_level)  # convert velocity to int
        self.get_logger().info(
            f'Sending info: "{self.velocity, self.battery_level}"')
        self.socket.send_data(message)


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()