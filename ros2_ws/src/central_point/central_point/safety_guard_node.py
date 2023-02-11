import rclpy, time
from rclpy.node import Node

from interface.msg import Ultrasonic, Acceleration, Information                  


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('local_planner')
        self.publisher = self.create_publisher(Information, 'central_point/safety_guard/info', 10)
        
        timer_period = 1/10
        self.timer = self.create_timer(timer_period, self.timer_callback)
        
        self.subscription_ultrasonic = self.create_subscription(
            Ultrasonic, 
            'driver/sensor/ultrasonic', 
            self.callback_ultrasonic, 
            10)
        
        self.subscription_imu = self.create_subscription(
            Acceleration, 
            'driver/sensor/imu', 
            self.callback_imu, 
            10)

        self.distance = 0
        self.acceleration = (0, 0, 0)
        
        self.__velocity = 0
        self.__time = 0
        
    def callback_ultrasonic(self, msg):
        self.distance = msg.distance
        self.get_logger().info(f'I heard ultrasonic sensor value: "{self.distance}"')
        
    def callback_imu(self, msg):
        self.acceleration = msg.acceleration_x, msg.acceleration_y, msg.acceleration_z
        self.get_logger().info(f'I heard imu sensor value: "{self.acceleration}"')
        
        
    def timer_callback(self):
        msg = Information()
        msg.emergency_stop = self.get_emergency_stop_decision()
        msg.velocity = self.get_velocity()
        self.publisher.publish(msg)
        self.get_logger().info(f'Publishing information: "{msg.emergency_stop}, {msg.velocity}"')
    
    def get_emergency_stop_decision(self):
        result = self.distance < 20 # less than 20 cm would stop
        return result
    
    def get_velocity(self):
        time_start = self.__time
        self.__time = time.perf_counter()
        self.__velocity += self.acceleration[0] * (self.__time - time_start)
        return self.__velocity


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
