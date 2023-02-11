// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__MSG__DETAIL__MOTOR__STRUCT_HPP_
#define MESSAGE__MSG__DETAIL__MOTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__message__msg__Motor __attribute__((deprecated))
#else
# define DEPRECATED__message__msg__Motor __declspec(deprecated)
#endif

namespace message
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Motor_
{
  using Type = Motor_<ContainerAllocator>;

  explicit Motor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_left_power = 0.0f;
      this->motor_right_power = 0.0f;
    }
  }

  explicit Motor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_left_power = 0.0f;
      this->motor_right_power = 0.0f;
    }
  }

  // field types and members
  using _motor_left_power_type =
    float;
  _motor_left_power_type motor_left_power;
  using _motor_right_power_type =
    float;
  _motor_right_power_type motor_right_power;

  // setters for named parameter idiom
  Type & set__motor_left_power(
    const float & _arg)
  {
    this->motor_left_power = _arg;
    return *this;
  }
  Type & set__motor_right_power(
    const float & _arg)
  {
    this->motor_right_power = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message::msg::Motor_<ContainerAllocator> *;
  using ConstRawPtr =
    const message::msg::Motor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message::msg::Motor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message::msg::Motor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message::msg::Motor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message::msg::Motor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message::msg::Motor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message::msg::Motor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message::msg::Motor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message::msg::Motor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message__msg__Motor
    std::shared_ptr<message::msg::Motor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message__msg__Motor
    std::shared_ptr<message::msg::Motor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motor_ & other) const
  {
    if (this->motor_left_power != other.motor_left_power) {
      return false;
    }
    if (this->motor_right_power != other.motor_right_power) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motor_

// alias to use template instance with default allocator
using Motor =
  message::msg::Motor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message

#endif  // MESSAGE__MSG__DETAIL__MOTOR__STRUCT_HPP_
