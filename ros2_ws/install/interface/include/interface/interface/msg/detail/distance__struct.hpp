// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface:msg/Distance.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__DISTANCE__STRUCT_HPP_
#define INTERFACE__MSG__DETAIL__DISTANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'distance'
#include "interface/msg/detail/float32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interface__msg__Distance __attribute__((deprecated))
#else
# define DEPRECATED__interface__msg__Distance __declspec(deprecated)
#endif

namespace interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Distance_
{
  using Type = Distance_<ContainerAllocator>;

  explicit Distance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : distance(_init)
  {
    (void)_init;
  }

  explicit Distance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : distance(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _distance_type =
    interface::msg::Float32_<ContainerAllocator>;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__distance(
    const interface::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface::msg::Distance_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface::msg::Distance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface::msg::Distance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface::msg::Distance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface::msg::Distance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface::msg::Distance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface::msg::Distance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface::msg::Distance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface::msg::Distance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface::msg::Distance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface__msg__Distance
    std::shared_ptr<interface::msg::Distance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface__msg__Distance
    std::shared_ptr<interface::msg::Distance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Distance_ & other) const
  {
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Distance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Distance_

// alias to use template instance with default allocator
using Distance =
  interface::msg::Distance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface

#endif  // INTERFACE__MSG__DETAIL__DISTANCE__STRUCT_HPP_
