import rclpy
from rclpy.node import Node

from interface.msg import Motor

from .scripts.motor_driver import MotorDriver


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('motor_actuator_node')
        self.subscription = self.create_subscription(
            Motor,
            'driver/actuator/motor',
            self.callback,
            1)

        self.motor_left = MotorDriver(enable1=21, pwm1=16, pwm2=20)
        self.motor_right = MotorDriver(enable1=26, pwm1=13, pwm2=19)

    def callback(self, msg):
        self.get_logger().info(
            f'I heard motor value: "{msg.motor_left_power, msg.motor_right_power}"')
        self.motor_left.set_output(msg.motor_left_power)
        self.motor_right.set_output(msg.motor_right_power)


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
