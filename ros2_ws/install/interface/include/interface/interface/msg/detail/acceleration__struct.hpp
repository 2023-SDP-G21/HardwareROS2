// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface:msg/Acceleration.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__ACCELERATION__STRUCT_HPP_
#define INTERFACE__MSG__DETAIL__ACCELERATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface__msg__Acceleration __attribute__((deprecated))
#else
# define DEPRECATED__interface__msg__Acceleration __declspec(deprecated)
#endif

namespace interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Acceleration_
{
  using Type = Acceleration_<ContainerAllocator>;

  explicit Acceleration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acceleration_x = 0.0f;
      this->acceleration_y = 0.0f;
      this->acceleration_z = 0.0f;
    }
  }

  explicit Acceleration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acceleration_x = 0.0f;
      this->acceleration_y = 0.0f;
      this->acceleration_z = 0.0f;
    }
  }

  // field types and members
  using _acceleration_x_type =
    float;
  _acceleration_x_type acceleration_x;
  using _acceleration_y_type =
    float;
  _acceleration_y_type acceleration_y;
  using _acceleration_z_type =
    float;
  _acceleration_z_type acceleration_z;

  // setters for named parameter idiom
  Type & set__acceleration_x(
    const float & _arg)
  {
    this->acceleration_x = _arg;
    return *this;
  }
  Type & set__acceleration_y(
    const float & _arg)
  {
    this->acceleration_y = _arg;
    return *this;
  }
  Type & set__acceleration_z(
    const float & _arg)
  {
    this->acceleration_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface::msg::Acceleration_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface::msg::Acceleration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface::msg::Acceleration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface::msg::Acceleration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface::msg::Acceleration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface::msg::Acceleration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface::msg::Acceleration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface::msg::Acceleration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface::msg::Acceleration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface::msg::Acceleration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface__msg__Acceleration
    std::shared_ptr<interface::msg::Acceleration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface__msg__Acceleration
    std::shared_ptr<interface::msg::Acceleration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Acceleration_ & other) const
  {
    if (this->acceleration_x != other.acceleration_x) {
      return false;
    }
    if (this->acceleration_y != other.acceleration_y) {
      return false;
    }
    if (this->acceleration_z != other.acceleration_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Acceleration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Acceleration_

// alias to use template instance with default allocator
using Acceleration =
  interface::msg::Acceleration_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface

#endif  // INTERFACE__MSG__DETAIL__ACCELERATION__STRUCT_HPP_
