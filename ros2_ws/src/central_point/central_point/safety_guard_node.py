import rclpy
import time
from rclpy.node import Node

from interface.msg import Ultrasonic, IMU, Information, Battery


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('local_planner')
        self.publisher = self.create_publisher(
            Information, 'central_point/safety_guard/info', 1)

        timer_period = 1/10
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.subscription_ultrasonic = self.create_subscription(
            Ultrasonic,
            'driver/sensor/ultrasonic',
            self.callback_ultrasonic,
            1)

        self.subscription_imu = self.create_subscription(
            IMU,
            'driver/sensor/imu',
            self.callback_imu,
            1)

        self.subscription_battery = self.create_subscription(
            Battery,
            'driver/sensor/battery',
            self.callback_battery,
            1)

        self.distance = None
        self.battery_value = None
        self.velocity = None

    def callback_ultrasonic(self, msg):
        self.distance = msg.distance
        self.get_logger().info(
            f'I heard ultrasonic sensor value: "{self.distance}"')

    def callback_imu(self, msg):
        self.velocity = msg.velocity
        self.get_logger().info(
            f'I heard imu sensor value: "{self.velocity}"')

    def callback_battery(self, msg):
        self.battery_value = msg.level
        self.get_logger().info(
            f'I heard battery sensor value: "{self.battery_value}"')

    def timer_callback(self):
        msg = Information()
        msg.emergency_stop = self.get_emergency_stop_decision()
        msg.disable_component = self.get_disable_component_decision()
        msg.component_connection_lost = self.get_component_connection_lost_decision()
        msg.collision_warning = self.get_collision_warning_decision()
        msg.battery_low = self.get_battery_low_decision()
        msg.battery_critical = self.get_battery_critical_decision()
        msg.speed_warning = self.get_speed_warning_decision()

        self.publisher.publish(msg)
        self.get_logger().info(
            f'Publishing information: "{msg.emergency_stop}"')

    def get_emergency_stop_decision(self):
        if self.distance is None:
            return False
        result = self.distance < 20  # less than 20 cm would stop
        return result

    def get_disable_component_decision(self):
        if self.distance is None:
            return True
        if self.battery_value is None:
            return True
        if self.velocity is None:
            return True
        return False

    def get_component_connection_lost_decision(self):
        result = False  # TODO
        return result

    def get_collision_warning_decision(self):
        if self.distance is None:
            return False
        result = self.distance < 50  # less than 50 cm would stop
        return result

    def get_battery_low_decision(self):
        if self.battery_value is None:
            return False
        result = self.battery_value < 0.20
        return result

    def get_battery_critical_decision(self):
        if self.battery_value is None:
            return False
        result = self.battery_value < 0.05
        return result

    def get_speed_warning_decision(self):
        if self.velocity is None:
            return False
        result = self.velocity > 1.5
        return result


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
