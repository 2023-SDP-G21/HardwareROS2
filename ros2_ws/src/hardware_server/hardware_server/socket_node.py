import rclpy
import time
from rclpy.node import Node

from interface.msg import Information, Objective, Battery, IMU

from .HardwareServer.hardware_server.message_generation import MessageGeneration
from .HardwareServer.hardware_server.bluetooth import Bluetooth


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('local_planner')
        self.publisher = self.create_publisher(
            Objective, 'hardware_server/socket/objective', 1)

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
            1)

        self.subscription_information = self.create_subscription(
            IMU,
            'driver/sensor/imu',
            self.callback_imu,
            1)

        self.subscription_battery = self.create_subscription(
            Battery,
            'driver/sensor/battery',
            self.callback_battery,
            1)

        # while True:
        self.socket = Bluetooth()
        self.socket.run()

        self.information = None
        self.velocity = 0
        self.battery_level = 0

    def callback_information(self, msg):
        self.get_logger().info(
            f'I heard info value: "{msg.emergency_stop}"')
        self.information = msg

    def callback_imu(self, msg):
        self.get_logger().info(
            f'I heard velocity value: "{msg.velocity}"')
        self.velocity = msg.velocity

    def callback_battery(self, msg):
        self.battery_level = msg.level
        self.get_logger().info(f'I heard battery sensor value: "{msg.level}"')

    def timer_receive_callback(self):
        msg = Objective()
        receive_data = self.socket.receive_data()
        if receive_data:
            angle, power = receive_data[-1]
            # power recieved is 0 - 100, we need it 0 - 1
            msg.power, msg.angle = (float(power/100), float(angle))
            # msg.power, msg.angle = (float(1), float(45))
            self.publisher.publish(msg)
            self.get_logger().info(
                f'Publishing objective: "{msg.power}, {msg.angle}"')

    def timer_send_callback(self):
        if self.information is None:
            return

        if self.information.emergency_stop:
            message = MessageGeneration.generate_warning_data(1)
            self.socket.send_data(message)
            self.get_logger().info(
                f'Sending info: "Error code"')
        if self.information.disable_component:
            message = MessageGeneration.generate_warning_data(2)
            self.socket.send_data(message)
            self.get_logger().info(
                f'Sending info: "Error code"')
        if self.information.component_connection_lost:
            message = MessageGeneration.generate_warning_data(3)
            self.socket.send_data(message)
            self.get_logger().info(
                f'Sending info: "Error code"')
        if self.information.collision_warning:
            message = MessageGeneration.generate_warning_data(4)
            self.socket.send_data(message)
            self.get_logger().info(
                f'Sending info: "Error code"')
        if self.information.battery_low:
            message = MessageGeneration.generate_warning_data(5)
            self.socket.send_data(message)
            self.get_logger().info(
                f'Sending info: "Error code"')
        if self.information.battery_critical:
            message = MessageGeneration.generate_warning_data(6)
            self.socket.send_data(message)
            self.get_logger().info(
                f'Sending info: "Error code"')
        if self.information.speed_warning:
            message = MessageGeneration.generate_warning_data(7)
            self.socket.send_data(message)
            self.get_logger().info(
                f'Sending info: "Error code"')

        message = MessageGeneration.generate_sensor_data(
            int(self.velocity * 10), int(self.battery_level * 100) - 1)  # convert velocity, battery to int
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
