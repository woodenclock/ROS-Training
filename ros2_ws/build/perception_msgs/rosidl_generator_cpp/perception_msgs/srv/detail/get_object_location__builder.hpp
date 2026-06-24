// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from perception_msgs:srv/GetObjectLocation.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MSGS__SRV__DETAIL__GET_OBJECT_LOCATION__BUILDER_HPP_
#define PERCEPTION_MSGS__SRV__DETAIL__GET_OBJECT_LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "perception_msgs/srv/detail/get_object_location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace perception_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::perception_msgs::srv::GetObjectLocation_Request>()
{
  return ::perception_msgs::srv::GetObjectLocation_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace perception_msgs


namespace perception_msgs
{

namespace srv
{

namespace builder
{

class Init_GetObjectLocation_Response_object_pose
{
public:
  explicit Init_GetObjectLocation_Response_object_pose(::perception_msgs::srv::GetObjectLocation_Response & msg)
  : msg_(msg)
  {}
  ::perception_msgs::srv::GetObjectLocation_Response object_pose(::perception_msgs::srv::GetObjectLocation_Response::_object_pose_type arg)
  {
    msg_.object_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::perception_msgs::srv::GetObjectLocation_Response msg_;
};

class Init_GetObjectLocation_Response_result
{
public:
  Init_GetObjectLocation_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetObjectLocation_Response_object_pose result(::perception_msgs::srv::GetObjectLocation_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_GetObjectLocation_Response_object_pose(msg_);
  }

private:
  ::perception_msgs::srv::GetObjectLocation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::perception_msgs::srv::GetObjectLocation_Response>()
{
  return perception_msgs::srv::builder::Init_GetObjectLocation_Response_result();
}

}  // namespace perception_msgs

#endif  // PERCEPTION_MSGS__SRV__DETAIL__GET_OBJECT_LOCATION__BUILDER_HPP_
