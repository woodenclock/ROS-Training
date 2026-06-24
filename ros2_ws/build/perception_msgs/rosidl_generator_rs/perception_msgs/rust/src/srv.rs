#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to perception_msgs__srv__GetObjectLocation_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetObjectLocation_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetObjectLocation_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetObjectLocation_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetObjectLocation_Request {
  type RmwMsg = super::srv::rmw::GetObjectLocation_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to perception_msgs__srv__GetObjectLocation_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetObjectLocation_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_pose: geometry_msgs::msg::Pose,

}



impl Default for GetObjectLocation_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetObjectLocation_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetObjectLocation_Response {
  type RmwMsg = super::srv::rmw::GetObjectLocation_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
        object_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.object_pose)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
        object_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.object_pose)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
      object_pose: geometry_msgs::msg::Pose::from_rmw_message(msg.object_pose),
    }
  }
}






#[link(name = "perception_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__perception_msgs__srv__GetObjectLocation() -> *const std::ffi::c_void;
}

// Corresponds to perception_msgs__srv__GetObjectLocation
#[allow(missing_docs, non_camel_case_types)]
pub struct GetObjectLocation;

impl rosidl_runtime_rs::Service for GetObjectLocation {
    type Request = GetObjectLocation_Request;
    type Response = GetObjectLocation_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__perception_msgs__srv__GetObjectLocation() }
    }
}


