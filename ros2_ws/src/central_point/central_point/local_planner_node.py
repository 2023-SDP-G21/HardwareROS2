import rclpy
from rclpy.node import Node

from interface.msg import Objective, Motor, Information


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('local_planner')
        self.publisher = self.create_publisher(
            Motor, 'driver/actuator/motor', 1)
        timer_period = 1/10
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.subscription_information = self.create_subscription(
            Information,
            'central_point/safety_guard/info',
            self.callback_information,
            1)

        self.subscription_objective = self.create_subscription(
            Objective,
            'hardware_server/socket/objective',
            self.callback_objective,
            1)

        self.angle = 0
        self.power = 0

        self.emergency_stop = False
        self.speed_warning = False
        self.battery_critical = False

    def callback_objective(self, msg):
        self.get_logger().info(
            f'I heard objective value: "{msg.angle}, {msg.power}"')
        self.angle = msg.angle
        self.power = msg.power

    def callback_information(self, msg):
        self.get_logger().info(
            f'I heard info value: "{msg.emergency_stop}"')
        self.emergency_stop = msg.emergency_stop
        self.speed_warning = msg.speed_warning
        self.battery_critical = msg.battery_critical

    def timer_callback(self):
        msg_motor = Motor()
        if self.emergency_stop:
            motor_left_power, motor_right_power = self.get_motor_break_power()
        elif self.battery_critical:
            motor_left_power, motor_right_power = (0, 0)
        # elif self.speed_warning:
        #     motor_left_power, motor_right_power = (0, 0)
        else:
            motor_left_power, motor_right_power = self.get_motor_power()
        msg_motor.motor_left_power, msg_motor.motor_right_power = (
            float(motor_left_power), float(motor_right_power))
        self.publisher.publish(msg_motor)
        self.get_logger().info(
            f'Publishing motor value: "{msg_motor.motor_left_power, msg_motor.motor_right_power}"')

    def get_motor_power(self):
        angle = abs(self.angle)
        if self.angle > 0:  # turn left
            if angle < 90:
                return ((1-angle/90)*self.power, self.power)
            return (-(1-(180-angle)/90)*self.power, -self.power)
        if self.angle <= 0:  # turn right
            if angle < 90:
                return (self.power, (1-angle/90)*self.power)
            return (-self.power, -(1-(180-angle)/90)*self.power)

    def get_motor_break_power(self):
        return (0, 0)


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
