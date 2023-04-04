#!/bin/bash

cd /home/pi/Env/HardwareROS2/ros2_ws
source /opt/ros/humble/setup.bash
source install/setup.bash
# colcon build
# systemctl stop serial-getty@serial0.services
# systemctl restart dev-serial0.device
# ros2 run hardware_server socket_node
# ros2 launch launch/wheelE_launch.py
 