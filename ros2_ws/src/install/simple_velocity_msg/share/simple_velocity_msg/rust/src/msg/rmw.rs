#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "simple_velocity_msg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__simple_velocity_msg__msg__SimpleVelocity() -> *const std::ffi::c_void;
}

#[link(name = "simple_velocity_msg__rosidl_generator_c")]
extern "C" {
    fn simple_velocity_msg__msg__SimpleVelocity__init(msg: *mut SimpleVelocity) -> bool;
    fn simple_velocity_msg__msg__SimpleVelocity__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimpleVelocity>, size: usize) -> bool;
    fn simple_velocity_msg__msg__SimpleVelocity__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimpleVelocity>);
    fn simple_velocity_msg__msg__SimpleVelocity__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimpleVelocity>, out_seq: *mut rosidl_runtime_rs::Sequence<SimpleVelocity>) -> bool;
}

// Corresponds to simple_velocity_msg__msg__SimpleVelocity
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimpleVelocity {

    // This member is not documented.
    #[allow(missing_docs)]
    pub linear_velocity: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_velocity: f64,

}



impl Default for SimpleVelocity {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !simple_velocity_msg__msg__SimpleVelocity__init(&mut msg as *mut _) {
        panic!("Call to simple_velocity_msg__msg__SimpleVelocity__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimpleVelocity {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simple_velocity_msg__msg__SimpleVelocity__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simple_velocity_msg__msg__SimpleVelocity__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { simple_velocity_msg__msg__SimpleVelocity__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimpleVelocity {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimpleVelocity where Self: Sized {
  const TYPE_NAME: &'static str = "simple_velocity_msg/msg/SimpleVelocity";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__simple_velocity_msg__msg__SimpleVelocity() }
  }
}


