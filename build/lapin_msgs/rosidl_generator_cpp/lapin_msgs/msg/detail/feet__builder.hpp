// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lapin_msgs:msg/Feet.idl
// generated code does not contain a copyright notice

#ifndef LAPIN_MSGS__MSG__DETAIL__FEET__BUILDER_HPP_
#define LAPIN_MSGS__MSG__DETAIL__FEET__BUILDER_HPP_

#include "lapin_msgs/msg/detail/feet__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace lapin_msgs
{

namespace msg
{

namespace builder
{

class Init_Feet_left_back_valid
{
public:
  explicit Init_Feet_left_back_valid(::lapin_msgs::msg::Feet & msg)
  : msg_(msg)
  {}
  ::lapin_msgs::msg::Feet left_back_valid(::lapin_msgs::msg::Feet::_left_back_valid_type arg)
  {
    msg_.left_back_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lapin_msgs::msg::Feet msg_;
};

class Init_Feet_left_back_force
{
public:
  explicit Init_Feet_left_back_force(::lapin_msgs::msg::Feet & msg)
  : msg_(msg)
  {}
  Init_Feet_left_back_valid left_back_force(::lapin_msgs::msg::Feet::_left_back_force_type arg)
  {
    msg_.left_back_force = std::move(arg);
    return Init_Feet_left_back_valid(msg_);
  }

private:
  ::lapin_msgs::msg::Feet msg_;
};

class Init_Feet_left_front_valid
{
public:
  explicit Init_Feet_left_front_valid(::lapin_msgs::msg::Feet & msg)
  : msg_(msg)
  {}
  Init_Feet_left_back_force left_front_valid(::lapin_msgs::msg::Feet::_left_front_valid_type arg)
  {
    msg_.left_front_valid = std::move(arg);
    return Init_Feet_left_back_force(msg_);
  }

private:
  ::lapin_msgs::msg::Feet msg_;
};

class Init_Feet_left_front_force
{
public:
  explicit Init_Feet_left_front_force(::lapin_msgs::msg::Feet & msg)
  : msg_(msg)
  {}
  Init_Feet_left_front_valid left_front_force(::lapin_msgs::msg::Feet::_left_front_force_type arg)
  {
    msg_.left_front_force = std::move(arg);
    return Init_Feet_left_front_valid(msg_);
  }

private:
  ::lapin_msgs::msg::Feet msg_;
};

class Init_Feet_right_back_valid
{
public:
  explicit Init_Feet_right_back_valid(::lapin_msgs::msg::Feet & msg)
  : msg_(msg)
  {}
  Init_Feet_left_front_force right_back_valid(::lapin_msgs::msg::Feet::_right_back_valid_type arg)
  {
    msg_.right_back_valid = std::move(arg);
    return Init_Feet_left_front_force(msg_);
  }

private:
  ::lapin_msgs::msg::Feet msg_;
};

class Init_Feet_right_back_force
{
public:
  explicit Init_Feet_right_back_force(::lapin_msgs::msg::Feet & msg)
  : msg_(msg)
  {}
  Init_Feet_right_back_valid right_back_force(::lapin_msgs::msg::Feet::_right_back_force_type arg)
  {
    msg_.right_back_force = std::move(arg);
    return Init_Feet_right_back_valid(msg_);
  }

private:
  ::lapin_msgs::msg::Feet msg_;
};

class Init_Feet_right_front_valid
{
public:
  explicit Init_Feet_right_front_valid(::lapin_msgs::msg::Feet & msg)
  : msg_(msg)
  {}
  Init_Feet_right_back_force right_front_valid(::lapin_msgs::msg::Feet::_right_front_valid_type arg)
  {
    msg_.right_front_valid = std::move(arg);
    return Init_Feet_right_back_force(msg_);
  }

private:
  ::lapin_msgs::msg::Feet msg_;
};

class Init_Feet_right_front_force
{
public:
  explicit Init_Feet_right_front_force(::lapin_msgs::msg::Feet & msg)
  : msg_(msg)
  {}
  Init_Feet_right_front_valid right_front_force(::lapin_msgs::msg::Feet::_right_front_force_type arg)
  {
    msg_.right_front_force = std::move(arg);
    return Init_Feet_right_front_valid(msg_);
  }

private:
  ::lapin_msgs::msg::Feet msg_;
};

class Init_Feet_header
{
public:
  Init_Feet_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Feet_right_front_force header(::lapin_msgs::msg::Feet::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Feet_right_front_force(msg_);
  }

private:
  ::lapin_msgs::msg::Feet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lapin_msgs::msg::Feet>()
{
  return lapin_msgs::msg::builder::Init_Feet_header();
}

}  // namespace lapin_msgs

#endif  // LAPIN_MSGS__MSG__DETAIL__FEET__BUILDER_HPP_
