#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to simple_velocity_msg__msg__SimpleVelocity

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SimpleVelocity::default())
  }
}

impl rosidl_runtime_rs::Message for SimpleVelocity {
  type RmwMsg = super::msg::rmw::SimpleVelocity;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        linear_velocity: msg.linear_velocity,
        angular_velocity: msg.angular_velocity,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      linear_velocity: msg.linear_velocity,
      angular_velocity: msg.angular_velocity,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      linear_velocity: msg.linear_velocity,
      angular_velocity: msg.angular_velocity,
    }
  }
}


