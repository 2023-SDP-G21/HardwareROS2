# HardwareROS2

## Development Plan

- [x] central point package
  - [ ] local planner node
  - [ ] safety guard node
- [x] server package
  - [ ] web socket node
  - [ ] reciever node
  - [ ] sender node
- [x] driver package
  - [x] ultrasonic sensor node
  - [x] IMU sensor node
  - [x] motor actuator node
  - [ ] lec actuator node
  - [ ] battery level sensor node
- [x] automate everything with ros launch
- [ ] system testing


## Command List

```
# start all process
sudo -i
cd /home/pi/Env/HardwareROS2/ros2_ws
source /opt/ros/humble/setup.bash
source install/setup.bash

ros2 launch launch/wheelE_launch.py
```

```bash
# init work space
source /opt/ros/humble/setup.bash

# build work space
cd ros2_ws
colcon build

# create package, package_namne: central_point
cd ros2_ws/src
ros2 pkg create --build-type ament_python <package_name>

# build package
cd ros2_ws
colcon build --packages-select <package_namne>
```

```bash
# init exe
. install/setup.bash

# run exe
ros2 run <package_name> <node_name>
```

## Other Information

```bash
# demo
ros2 run demo_nodes_py talker
ros2 run demo_nodes_py listener
```

Notice that ros2 doesn't have documentation about action message defining with python make, we need create a package called message with cpp make, for any customised type.

if IMU sensor not working, run 
```bash
systemctl stop serial-getty@serial0.services
```

## Installation

1. Install Ubuntu 22.04 to raspberry pi 4+
2. Wlan configuration
3. Bluetooth configuration
4. ROS2 humble installation
5. colcon build tool install
6. clone repository
7. Dependency installation
8. ROS2 build
9. Test nodes with launch (comment imu sensor launch scripts)
10. Test nodes with launch (with imu sensor launch scripts)
11. Configure auto start while booting with service
