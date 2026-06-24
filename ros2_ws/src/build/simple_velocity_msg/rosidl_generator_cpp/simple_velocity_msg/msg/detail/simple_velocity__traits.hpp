// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simple_velocity_msg:msg/SimpleVelocity.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_VELOCITY_MSG__MSG__DETAIL__SIMPLE_VELOCITY__TRAITS_HPP_
#define SIMPLE_VELOCITY_MSG__MSG__DETAIL__SIMPLE_VELOCITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simple_velocity_msg/msg/detail/simple_velocity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace simple_velocity_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const SimpleVelocity & msg,
  std::ostream & out)
{
  out << "{";
  // member: linear_velocity
  {
    out << "linear_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_velocity, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimpleVelocity & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: linear_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_velocity, out);
    out << "\n";
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimpleVelocity & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace simple_velocity_msg

namespace rosidl_generator_traits
{

[[deprecated("use simple_velocity_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simple_velocity_msg::msg::SimpleVelocity & msg,
  std::ostream & out, size_t indentation = 0)
{
  simple_velocity_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simple_velocity_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const simple_velocity_msg::msg::SimpleVelocity & msg)
{
  return simple_velocity_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<simple_velocity_msg::msg::SimpleVelocity>()
{
  return "simple_velocity_msg::msg::SimpleVelocity";
}

template<>
inline const char * name<simple_velocity_msg::msg::SimpleVelocity>()
{
  return "simple_velocity_msg/msg/SimpleVelocity";
}

template<>
struct has_fixed_size<simple_velocity_msg::msg::SimpleVelocity>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<simple_velocity_msg::msg::SimpleVelocity>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<simple_velocity_msg::msg::SimpleVelocity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIMPLE_VELOCITY_MSG__MSG__DETAIL__SIMPLE_VELOCITY__TRAITS_HPP_
