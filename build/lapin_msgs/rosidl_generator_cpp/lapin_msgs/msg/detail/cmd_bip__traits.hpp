// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lapin_msgs:msg/CmdBip.idl
// generated code does not contain a copyright notice

#ifndef LAPIN_MSGS__MSG__DETAIL__CMD_BIP__TRAITS_HPP_
#define LAPIN_MSGS__MSG__DETAIL__CMD_BIP__TRAITS_HPP_

#include "lapin_msgs/msg/detail/cmd_bip__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lapin_msgs::msg::CmdBip>()
{
  return "lapin_msgs::msg::CmdBip";
}

template<>
struct has_fixed_size<lapin_msgs::msg::CmdBip>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<lapin_msgs::msg::CmdBip>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<lapin_msgs::msg::CmdBip>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LAPIN_MSGS__MSG__DETAIL__CMD_BIP__TRAITS_HPP_
