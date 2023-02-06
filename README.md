# HardwareROS2

## Development Plan

- [ ] central point package
  - [ ] local planner node
  - [ ] safety guard node
- [ ] server package
  - [ ] web socket node
  - [ ] serial socket node
- [ ] driver package
  - [ ] ultrasonic sensor node
  - [ ] IMU sensor node
  - [ ] motor actuator node
- [ ] automate everything with ros launch
- [ ] system testing


## Command List

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
