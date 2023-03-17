import rclpy
from rclpy.node import Node
import time

from interface.msg import Led, Battery

from .scripts.led_driver import LedDriver


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('led_actuator_node')
        self.subscription = self.create_subscription(
            Led,
            'driver/actuator/led/information',
            self.callback_information,
            10)

        self.subscription = self.create_subscription(
            Battery,
            'driver/sensor/battery',
            self.callback_battery,
            10)

        self.led_drivers = (LedDriver(17), LedDriver(27),
                            LedDriver(22))  # left first

    def callback_information(self, msg):
        self.get_logger().info(
            f'I heard led information value: "{msg.led_index, msg.led_on}"')
        if msg.led_blink:
            self.led_drivers[msg.led_index].led_blink()
        if msg.led_on:
            self.led_drivers[msg.led_index].turn_on_led()
        else:
            self.led_drivers[msg.led_index].turn_off_led()

    def callback_battery(self, msg):
        self.get_logger().info(
            f'I heard battery value: "{msg.level}"')
        if msg.level > 0.67:
            self.led_drivers[2].turn_on_led()
            self.led_drivers[1].turn_on_led()
            self.led_drivers[0].turn_on_led()
        elif msg.level > 0.33:
            self.led_drivers[2].turn_on_led()
            self.led_drivers[1].turn_on_led()
            self.led_drivers[0].turn_off_led()
        elif msg.level > 0.05:
            self.led_drivers[2].turn_on_led()
            self.led_drivers[1].turn_off_led()
            self.led_drivers[0].turn_off_led()
        else:
            self.led_drivers[0].turn_off_led()
            self.led_drivers[1].turn_off_led()
            self.led_drivers[2].led_blink()


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
