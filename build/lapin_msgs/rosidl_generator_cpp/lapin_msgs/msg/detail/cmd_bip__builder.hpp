// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lapin_msgs:msg/CmdBip.idl
// generated code does not contain a copyright notice

#ifndef LAPIN_MSGS__MSG__DETAIL__CMD_BIP__BUILDER_HPP_
#define LAPIN_MSGS__MSG__DETAIL__CMD_BIP__BUILDER_HPP_

#include "lapin_msgs/msg/detail/cmd_bip__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace lapin_msgs
{

namespace msg
{

namespace builder
{

class Init_CmdBip_left_ankle_compliant
{
public:
  explicit Init_CmdBip_left_ankle_compliant(::lapin_msgs::msg::CmdBip & msg)
  : msg_(msg)
  {}
  ::lapin_msgs::msg::CmdBip left_ankle_compliant(::lapin_msgs::msg::CmdBip::_left_ankle_compliant_type arg)
  {
    msg_.left_ankle_compliant = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lapin_msgs::msg::CmdBip msg_;
};

class Init_CmdBip_left_ankle_angle
{
public:
  explicit Init_CmdBip_left_ankle_angle(::lapin_msgs::msg::CmdBip & msg)
  : msg_(msg)
  {}
  Init_CmdBip_left_ankle_compliant left_ankle_angle(::lapin_msgs::msg::CmdBip::_left_ankle_angle_type arg)
  {
    msg_.left_ankle_angle = std::move(arg);
    return Init_CmdBip_left_ankle_compliant(msg_);
  }

private:
  ::lapin_msgs::msg::CmdBip msg_;
};

class Init_CmdBip_left_leg_extension_ratio
{
public:
  explicit Init_CmdBip_left_leg_extension_ratio(::lapin_msgs::msg::CmdBip & msg)
  : msg_(msg)
  {}
  Init_CmdBip_left_ankle_angle left_leg_extension_ratio(::lapin_msgs::msg::CmdBip::_left_leg_extension_ratio_type arg)
  {
    msg_.left_leg_extension_ratio = std::move(arg);
    return Init_CmdBip_left_ankle_angle(msg_);
  }

private:
  ::lapin_msgs::msg::CmdBip msg_;
};

class Init_CmdBip_right_ankle_compliant
{
public:
  explicit Init_CmdBip_right_ankle_compliant(::lapin_msgs::msg::CmdBip & msg)
  : msg_(msg)
  {}
  Init_CmdBip_left_leg_extension_ratio right_ankle_compliant(::lapin_msgs::msg::CmdBip::_right_ankle_compliant_type arg)
  {
    msg_.right_ankle_compliant = std::move(arg);
    return Init_CmdBip_left_leg_extension_ratio(msg_);
  }

private:
  ::lapin_msgs::msg::CmdBip msg_;
};

class Init_CmdBip_right_ankle_angle
{
public:
  explicit Init_CmdBip_right_ankle_angle(::lapin_msgs::msg::CmdBip & msg)
  : msg_(msg)
  {}
  Init_CmdBip_right_ankle_compliant right_ankle_angle(::lapin_msgs::msg::CmdBip::_right_ankle_angle_type arg)
  {
    msg_.right_ankle_angle = std::move(arg);
    return Init_CmdBip_right_ankle_compliant(msg_);
  }

private:
  ::lapin_msgs::msg::CmdBip msg_;
};

class Init_CmdBip_right_leg_extension_ratio
{
public:
  explicit Init_CmdBip_right_leg_extension_ratio(::lapin_msgs::msg::CmdBip & msg)
  : msg_(msg)
  {}
  Init_CmdBip_right_ankle_angle right_leg_extension_ratio(::lapin_msgs::msg::CmdBip::_right_leg_extension_ratio_type arg)
  {
    msg_.right_leg_extension_ratio = std::move(arg);
    return Init_CmdBip_right_ankle_angle(msg_);
  }

private:
  ::lapin_msgs::msg::CmdBip msg_;
};

class Init_CmdBip_speed
{
public:
  explicit Init_CmdBip_speed(::lapin_msgs::msg::CmdBip & msg)
  : msg_(msg)
  {}
  Init_CmdBip_right_leg_extension_ratio speed(::lapin_msgs::msg::CmdBip::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_CmdBip_right_leg_extension_ratio(msg_);
  }

private:
  ::lapin_msgs::msg::CmdBip msg_;
};

class Init_CmdBip_compliant
{
public:
  explicit Init_CmdBip_compliant(::lapin_msgs::msg::CmdBip & msg)
  : msg_(msg)
  {}
  Init_CmdBip_speed compliant(::lapin_msgs::msg::CmdBip::_compliant_type arg)
  {
    msg_.compliant = std::move(arg);
    return Init_CmdBip_speed(msg_);
  }

private:
  ::lapin_msgs::msg::CmdBip msg_;
};

class Init_CmdBip_sway_angle
{
public:
  explicit Init_CmdBip_sway_angle(::lapin_msgs::msg::CmdBip & msg)
  : msg_(msg)
  {}
  Init_CmdBip_compliant sway_angle(::lapin_msgs::msg::CmdBip::_sway_angle_type arg)
  {
    msg_.sway_angle = std::move(arg);
    return Init_CmdBip_compliant(msg_);
  }

private:
  ::lapin_msgs::msg::CmdBip msg_;
};

class Init_CmdBip_frontal_bissecting_angle
{
public:
  explicit Init_CmdBip_frontal_bissecting_angle(::lapin_msgs::msg::CmdBip & msg)
  : msg_(msg)
  {}
  Init_CmdBip_sway_angle frontal_bissecting_angle(::lapin_msgs::msg::CmdBip::_frontal_bissecting_angle_type arg)
  {
    msg_.frontal_bissecting_angle = std::move(arg);
    return Init_CmdBip_sway_angle(msg_);
  }

private:
  ::lapin_msgs::msg::CmdBip msg_;
};

class Init_CmdBip_sagittal_bissecting_angle
{
public:
  explicit Init_CmdBip_sagittal_bissecting_angle(::lapin_msgs::msg::CmdBip & msg)
  : msg_(msg)
  {}
  Init_CmdBip_frontal_bissecting_angle sagittal_bissecting_angle(::lapin_msgs::msg::CmdBip::_sagittal_bissecting_angle_type arg)
  {
    msg_.sagittal_bissecting_angle = std::move(arg);
    return Init_CmdBip_frontal_bissecting_angle(msg_);
  }

private:
  ::lapin_msgs::msg::CmdBip msg_;
};

class Init_CmdBip_header
{
public:
  Init_CmdBip_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CmdBip_sagittal_bissecting_angle header(::lapin_msgs::msg::CmdBip::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CmdBip_sagittal_bissecting_angle(msg_);
  }

private:
  ::lapin_msgs::msg::CmdBip msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lapin_msgs::msg::CmdBip>()
{
  return lapin_msgs::msg::builder::Init_CmdBip_header();
}

}  // namespace lapin_msgs

#endif  // LAPIN_MSGS__MSG__DETAIL__CMD_BIP__BUILDER_HPP_
