// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface:msg/Ultrasonic.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__ULTRASONIC__STRUCT_HPP_
#define INTERFACE__MSG__DETAIL__ULTRASONIC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface__msg__Ultrasonic __attribute__((deprecated))
#else
# define DEPRECATED__interface__msg__Ultrasonic __declspec(deprecated)
#endif

namespace interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ultrasonic_
{
  using Type = Ultrasonic_<ContainerAllocator>;

  explicit Ultrasonic_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
    }
  }

  explicit Ultrasonic_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
    }
  }

  // field types and members
  using _distance_type =
    float;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface::msg::Ultrasonic_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface::msg::Ultrasonic_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface::msg::Ultrasonic_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface::msg::Ultrasonic_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface::msg::Ultrasonic_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface::msg::Ultrasonic_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface::msg::Ultrasonic_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface::msg::Ultrasonic_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface::msg::Ultrasonic_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface::msg::Ultrasonic_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface__msg__Ultrasonic
    std::shared_ptr<interface::msg::Ultrasonic_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface__msg__Ultrasonic
    std::shared_ptr<interface::msg::Ultrasonic_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ultrasonic_ & other) const
  {
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ultrasonic_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ultrasonic_

// alias to use template instance with default allocator
using Ultrasonic =
  interface::msg::Ultrasonic_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface

#endif  // INTERFACE__MSG__DETAIL__ULTRASONIC__STRUCT_HPP_
