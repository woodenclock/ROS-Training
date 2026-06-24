// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from perception_msgs:srv/GetObjectLocation.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MSGS__SRV__DETAIL__GET_OBJECT_LOCATION__TRAITS_HPP_
#define PERCEPTION_MSGS__SRV__DETAIL__GET_OBJECT_LOCATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "perception_msgs/srv/detail/get_object_location__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace perception_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetObjectLocation_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetObjectLocation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetObjectLocation_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use perception_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const perception_msgs::srv::GetObjectLocation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  perception_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use perception_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const perception_msgs::srv::GetObjectLocation_Request & msg)
{
  return perception_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<perception_msgs::srv::GetObjectLocation_Request>()
{
  return "perception_msgs::srv::GetObjectLocation_Request";
}

template<>
inline const char * name<perception_msgs::srv::GetObjectLocation_Request>()
{
  return "perception_msgs/srv/GetObjectLocation_Request";
}

template<>
struct has_fixed_size<perception_msgs::srv::GetObjectLocation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<perception_msgs::srv::GetObjectLocation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<perception_msgs::srv::GetObjectLocation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'object_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace perception_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetObjectLocation_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << ", ";
  }

  // member: object_pose
  {
    out << "object_pose: ";
    to_flow_style_yaml(msg.object_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetObjectLocation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }

  // member: object_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_pose:\n";
    to_block_style_yaml(msg.object_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetObjectLocation_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use perception_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const perception_msgs::srv::GetObjectLocation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  perception_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use perception_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const perception_msgs::srv::GetObjectLocation_Response & msg)
{
  return perception_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<perception_msgs::srv::GetObjectLocation_Response>()
{
  return "perception_msgs::srv::GetObjectLocation_Response";
}

template<>
inline const char * name<perception_msgs::srv::GetObjectLocation_Response>()
{
  return "perception_msgs/srv/GetObjectLocation_Response";
}

template<>
struct has_fixed_size<perception_msgs::srv::GetObjectLocation_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<perception_msgs::srv::GetObjectLocation_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<perception_msgs::srv::GetObjectLocation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<perception_msgs::srv::GetObjectLocation>()
{
  return "perception_msgs::srv::GetObjectLocation";
}

template<>
inline const char * name<perception_msgs::srv::GetObjectLocation>()
{
  return "perception_msgs/srv/GetObjectLocation";
}

template<>
struct has_fixed_size<perception_msgs::srv::GetObjectLocation>
  : std::integral_constant<
    bool,
    has_fixed_size<perception_msgs::srv::GetObjectLocation_Request>::value &&
    has_fixed_size<perception_msgs::srv::GetObjectLocation_Response>::value
  >
{
};

template<>
struct has_bounded_size<perception_msgs::srv::GetObjectLocation>
  : std::integral_constant<
    bool,
    has_bounded_size<perception_msgs::srv::GetObjectLocation_Request>::value &&
    has_bounded_size<perception_msgs::srv::GetObjectLocation_Response>::value
  >
{
};

template<>
struct is_service<perception_msgs::srv::GetObjectLocation>
  : std::true_type
{
};

template<>
struct is_service_request<perception_msgs::srv::GetObjectLocation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<perception_msgs::srv::GetObjectLocation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PERCEPTION_MSGS__SRV__DETAIL__GET_OBJECT_LOCATION__TRAITS_HPP_
