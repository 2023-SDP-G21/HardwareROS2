#! /usr/bin/env bash
cd /home/pi/Env/HardwareROS2/ros2_ws
source /opt/ros/humble/setup.bash
source install/setup.bash
ros2 launch launch/wheelE_launch.py
