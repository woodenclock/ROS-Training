// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simple_velocity_msg:msg/SimpleVelocity.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_VELOCITY_MSG__MSG__DETAIL__SIMPLE_VELOCITY__BUILDER_HPP_
#define SIMPLE_VELOCITY_MSG__MSG__DETAIL__SIMPLE_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simple_velocity_msg/msg/detail/simple_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simple_velocity_msg
{

namespace msg
{

namespace builder
{

class Init_SimpleVelocity_angular_velocity
{
public:
  explicit Init_SimpleVelocity_angular_velocity(::simple_velocity_msg::msg::SimpleVelocity & msg)
  : msg_(msg)
  {}
  ::simple_velocity_msg::msg::SimpleVelocity angular_velocity(::simple_velocity_msg::msg::SimpleVelocity::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simple_velocity_msg::msg::SimpleVelocity msg_;
};

class Init_SimpleVelocity_linear_velocity
{
public:
  Init_SimpleVelocity_linear_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimpleVelocity_angular_velocity linear_velocity(::simple_velocity_msg::msg::SimpleVelocity::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_SimpleVelocity_angular_velocity(msg_);
  }

private:
  ::simple_velocity_msg::msg::SimpleVelocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_velocity_msg::msg::SimpleVelocity>()
{
  return simple_velocity_msg::msg::builder::Init_SimpleVelocity_linear_velocity();
}

}  // namespace simple_velocity_msg

#endif  // SIMPLE_VELOCITY_MSG__MSG__DETAIL__SIMPLE_VELOCITY__BUILDER_HPP_
