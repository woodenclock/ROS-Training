// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simple_velocity_msg:msg/SimpleVelocity.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_VELOCITY_MSG__MSG__DETAIL__SIMPLE_VELOCITY__STRUCT_HPP_
#define SIMPLE_VELOCITY_MSG__MSG__DETAIL__SIMPLE_VELOCITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__simple_velocity_msg__msg__SimpleVelocity __attribute__((deprecated))
#else
# define DEPRECATED__simple_velocity_msg__msg__SimpleVelocity __declspec(deprecated)
#endif

namespace simple_velocity_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SimpleVelocity_
{
  using Type = SimpleVelocity_<ContainerAllocator>;

  explicit SimpleVelocity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_velocity = 0.0;
      this->angular_velocity = 0.0;
    }
  }

  explicit SimpleVelocity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_velocity = 0.0;
      this->angular_velocity = 0.0;
    }
  }

  // field types and members
  using _linear_velocity_type =
    double;
  _linear_velocity_type linear_velocity;
  using _angular_velocity_type =
    double;
  _angular_velocity_type angular_velocity;

  // setters for named parameter idiom
  Type & set__linear_velocity(
    const double & _arg)
  {
    this->linear_velocity = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const double & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simple_velocity_msg::msg::SimpleVelocity_<ContainerAllocator> *;
  using ConstRawPtr =
    const simple_velocity_msg::msg::SimpleVelocity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simple_velocity_msg::msg::SimpleVelocity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simple_velocity_msg::msg::SimpleVelocity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simple_velocity_msg::msg::SimpleVelocity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simple_velocity_msg::msg::SimpleVelocity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simple_velocity_msg::msg::SimpleVelocity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simple_velocity_msg::msg::SimpleVelocity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simple_velocity_msg::msg::SimpleVelocity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simple_velocity_msg::msg::SimpleVelocity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simple_velocity_msg__msg__SimpleVelocity
    std::shared_ptr<simple_velocity_msg::msg::SimpleVelocity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simple_velocity_msg__msg__SimpleVelocity
    std::shared_ptr<simple_velocity_msg::msg::SimpleVelocity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimpleVelocity_ & other) const
  {
    if (this->linear_velocity != other.linear_velocity) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimpleVelocity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimpleVelocity_

// alias to use template instance with default allocator
using SimpleVelocity =
  simple_velocity_msg::msg::SimpleVelocity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace simple_velocity_msg

#endif  // SIMPLE_VELOCITY_MSG__MSG__DETAIL__SIMPLE_VELOCITY__STRUCT_HPP_
