// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from perception_msgs:srv/GetObjectLocation.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MSGS__SRV__DETAIL__GET_OBJECT_LOCATION__STRUCT_HPP_
#define PERCEPTION_MSGS__SRV__DETAIL__GET_OBJECT_LOCATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__perception_msgs__srv__GetObjectLocation_Request __attribute__((deprecated))
#else
# define DEPRECATED__perception_msgs__srv__GetObjectLocation_Request __declspec(deprecated)
#endif

namespace perception_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetObjectLocation_Request_
{
  using Type = GetObjectLocation_Request_<ContainerAllocator>;

  explicit GetObjectLocation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetObjectLocation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    perception_msgs::srv::GetObjectLocation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const perception_msgs::srv::GetObjectLocation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<perception_msgs::srv::GetObjectLocation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<perception_msgs::srv::GetObjectLocation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      perception_msgs::srv::GetObjectLocation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<perception_msgs::srv::GetObjectLocation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      perception_msgs::srv::GetObjectLocation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<perception_msgs::srv::GetObjectLocation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<perception_msgs::srv::GetObjectLocation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<perception_msgs::srv::GetObjectLocation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__perception_msgs__srv__GetObjectLocation_Request
    std::shared_ptr<perception_msgs::srv::GetObjectLocation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__perception_msgs__srv__GetObjectLocation_Request
    std::shared_ptr<perception_msgs::srv::GetObjectLocation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetObjectLocation_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetObjectLocation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetObjectLocation_Request_

// alias to use template instance with default allocator
using GetObjectLocation_Request =
  perception_msgs::srv::GetObjectLocation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace perception_msgs


// Include directives for member types
// Member 'object_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__perception_msgs__srv__GetObjectLocation_Response __attribute__((deprecated))
#else
# define DEPRECATED__perception_msgs__srv__GetObjectLocation_Response __declspec(deprecated)
#endif

namespace perception_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetObjectLocation_Response_
{
  using Type = GetObjectLocation_Response_<ContainerAllocator>;

  explicit GetObjectLocation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit GetObjectLocation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;
  using _object_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _object_pose_type object_pose;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__object_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->object_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    perception_msgs::srv::GetObjectLocation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const perception_msgs::srv::GetObjectLocation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<perception_msgs::srv::GetObjectLocation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<perception_msgs::srv::GetObjectLocation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      perception_msgs::srv::GetObjectLocation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<perception_msgs::srv::GetObjectLocation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      perception_msgs::srv::GetObjectLocation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<perception_msgs::srv::GetObjectLocation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<perception_msgs::srv::GetObjectLocation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<perception_msgs::srv::GetObjectLocation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__perception_msgs__srv__GetObjectLocation_Response
    std::shared_ptr<perception_msgs::srv::GetObjectLocation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__perception_msgs__srv__GetObjectLocation_Response
    std::shared_ptr<perception_msgs::srv::GetObjectLocation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetObjectLocation_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->object_pose != other.object_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetObjectLocation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetObjectLocation_Response_

// alias to use template instance with default allocator
using GetObjectLocation_Response =
  perception_msgs::srv::GetObjectLocation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace perception_msgs

namespace perception_msgs
{

namespace srv
{

struct GetObjectLocation
{
  using Request = perception_msgs::srv::GetObjectLocation_Request;
  using Response = perception_msgs::srv::GetObjectLocation_Response;
};

}  // namespace srv

}  // namespace perception_msgs

#endif  // PERCEPTION_MSGS__SRV__DETAIL__GET_OBJECT_LOCATION__STRUCT_HPP_
