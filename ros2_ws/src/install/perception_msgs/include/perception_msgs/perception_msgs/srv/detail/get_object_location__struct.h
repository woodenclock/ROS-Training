// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from perception_msgs:srv/GetObjectLocation.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MSGS__SRV__DETAIL__GET_OBJECT_LOCATION__STRUCT_H_
#define PERCEPTION_MSGS__SRV__DETAIL__GET_OBJECT_LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetObjectLocation in the package perception_msgs.
typedef struct perception_msgs__srv__GetObjectLocation_Request
{
  uint8_t structure_needs_at_least_one_member;
} perception_msgs__srv__GetObjectLocation_Request;

// Struct for a sequence of perception_msgs__srv__GetObjectLocation_Request.
typedef struct perception_msgs__srv__GetObjectLocation_Request__Sequence
{
  perception_msgs__srv__GetObjectLocation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} perception_msgs__srv__GetObjectLocation_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'object_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/GetObjectLocation in the package perception_msgs.
typedef struct perception_msgs__srv__GetObjectLocation_Response
{
  bool result;
  geometry_msgs__msg__Pose object_pose;
} perception_msgs__srv__GetObjectLocation_Response;

// Struct for a sequence of perception_msgs__srv__GetObjectLocation_Response.
typedef struct perception_msgs__srv__GetObjectLocation_Response__Sequence
{
  perception_msgs__srv__GetObjectLocation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} perception_msgs__srv__GetObjectLocation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERCEPTION_MSGS__SRV__DETAIL__GET_OBJECT_LOCATION__STRUCT_H_
