#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "perception_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__perception_msgs__srv__GetObjectLocation_Request() -> *const std::ffi::c_void;
}

#[link(name = "perception_msgs__rosidl_generator_c")]
extern "C" {
    fn perception_msgs__srv__GetObjectLocation_Request__init(msg: *mut GetObjectLocation_Request) -> bool;
    fn perception_msgs__srv__GetObjectLocation_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetObjectLocation_Request>, size: usize) -> bool;
    fn perception_msgs__srv__GetObjectLocation_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetObjectLocation_Request>);
    fn perception_msgs__srv__GetObjectLocation_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetObjectLocation_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetObjectLocation_Request>) -> bool;
}

// Corresponds to perception_msgs__srv__GetObjectLocation_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetObjectLocation_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetObjectLocation_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !perception_msgs__srv__GetObjectLocation_Request__init(&mut msg as *mut _) {
        panic!("Call to perception_msgs__srv__GetObjectLocation_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetObjectLocation_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { perception_msgs__srv__GetObjectLocation_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { perception_msgs__srv__GetObjectLocation_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { perception_msgs__srv__GetObjectLocation_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetObjectLocation_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetObjectLocation_Request where Self: Sized {
  const TYPE_NAME: &'static str = "perception_msgs/srv/GetObjectLocation_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__perception_msgs__srv__GetObjectLocation_Request() }
  }
}


#[link(name = "perception_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__perception_msgs__srv__GetObjectLocation_Response() -> *const std::ffi::c_void;
}

#[link(name = "perception_msgs__rosidl_generator_c")]
extern "C" {
    fn perception_msgs__srv__GetObjectLocation_Response__init(msg: *mut GetObjectLocation_Response) -> bool;
    fn perception_msgs__srv__GetObjectLocation_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetObjectLocation_Response>, size: usize) -> bool;
    fn perception_msgs__srv__GetObjectLocation_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetObjectLocation_Response>);
    fn perception_msgs__srv__GetObjectLocation_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetObjectLocation_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetObjectLocation_Response>) -> bool;
}

// Corresponds to perception_msgs__srv__GetObjectLocation_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetObjectLocation_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_pose: geometry_msgs::msg::rmw::Pose,

}



impl Default for GetObjectLocation_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !perception_msgs__srv__GetObjectLocation_Response__init(&mut msg as *mut _) {
        panic!("Call to perception_msgs__srv__GetObjectLocation_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetObjectLocation_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { perception_msgs__srv__GetObjectLocation_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { perception_msgs__srv__GetObjectLocation_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { perception_msgs__srv__GetObjectLocation_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetObjectLocation_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetObjectLocation_Response where Self: Sized {
  const TYPE_NAME: &'static str = "perception_msgs/srv/GetObjectLocation_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__perception_msgs__srv__GetObjectLocation_Response() }
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


