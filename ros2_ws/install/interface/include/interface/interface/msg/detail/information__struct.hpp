// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface:msg/Information.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__INFORMATION__STRUCT_HPP_
#define INTERFACE__MSG__DETAIL__INFORMATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface__msg__Information __attribute__((deprecated))
#else
# define DEPRECATED__interface__msg__Information __declspec(deprecated)
#endif

namespace interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Information_
{
  using Type = Information_<ContainerAllocator>;

  explicit Information_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->emergency_stop = false;
      this->velocity = 0.0f;
    }
  }

  explicit Information_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->emergency_stop = false;
      this->velocity = 0.0f;
    }
  }

  // field types and members
  using _emergency_stop_type =
    bool;
  _emergency_stop_type emergency_stop;
  using _velocity_type =
    float;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__emergency_stop(
    const bool & _arg)
  {
    this->emergency_stop = _arg;
    return *this;
  }
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface::msg::Information_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface::msg::Information_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface::msg::Information_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface::msg::Information_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface::msg::Information_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface::msg::Information_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface::msg::Information_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface::msg::Information_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface::msg::Information_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface::msg::Information_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface__msg__Information
    std::shared_ptr<interface::msg::Information_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface__msg__Information
    std::shared_ptr<interface::msg::Information_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Information_ & other) const
  {
    if (this->emergency_stop != other.emergency_stop) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const Information_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Information_

// alias to use template instance with default allocator
using Information =
  interface::msg::Information_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface

#endif  // INTERFACE__MSG__DETAIL__INFORMATION__STRUCT_HPP_
