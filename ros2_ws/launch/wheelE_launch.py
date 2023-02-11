from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='central_point',
            namespace='WheelE',
            executable='safety_guard_node',
            name='safety_guard'
        ),
        Node(
            package='central_point',
            namespace='WheelE',
            executable='local_planner_node',
            name='local_planner'
        ),
        Node(
            package='hardware_driver',
            namespace='WheelE',
            executable='motor_actuator_node',
            name='motor_actuator'
        ),
        Node(
            package='hardware_driver',
            namespace='WheelE',
            executable='ultrasonic_sensor_node',
            name='ultrasonic_sensor'
        ),
        Node(
            package='hardware_driver',
            namespace='WheelE',
            executable='imu_sensor_node',
            name='imu_sensor'
        ),
        Node(
            package='hardware_server',
            namespace='WheelE',
            executable='socket_node',
            name='socket'
        ),
        # Node(
        #     package='turtlesim',
        #     executable='mimic',
        #     name='mimic',
        #     remappings=[
        #         ('/input/pose', '/turtlesim1/turtle1/pose'),
        #         ('/output/cmd_vel', '/turtlesim2/turtle1/cmd_vel'),
        #     ]
        # )
    ])