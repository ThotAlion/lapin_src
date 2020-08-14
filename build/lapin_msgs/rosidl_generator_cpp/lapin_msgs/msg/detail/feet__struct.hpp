// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lapin_msgs:msg/Feet.idl
// generated code does not contain a copyright notice

#ifndef LAPIN_MSGS__MSG__DETAIL__FEET__STRUCT_HPP_
#define LAPIN_MSGS__MSG__DETAIL__FEET__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lapin_msgs__msg__Feet __attribute__((deprecated))
#else
# define DEPRECATED__lapin_msgs__msg__Feet __declspec(deprecated)
#endif

namespace lapin_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Feet_
{
  using Type = Feet_<ContainerAllocator>;

  explicit Feet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_front_force = 0ll;
      this->right_front_valid = false;
      this->right_back_force = 0ll;
      this->right_back_valid = false;
      this->left_front_force = 0ll;
      this->left_front_valid = false;
      this->left_back_force = 0ll;
      this->left_back_valid = false;
    }
  }

  explicit Feet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_front_force = 0ll;
      this->right_front_valid = false;
      this->right_back_force = 0ll;
      this->right_back_valid = false;
      this->left_front_force = 0ll;
      this->left_front_valid = false;
      this->left_back_force = 0ll;
      this->left_back_valid = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _right_front_force_type =
    int64_t;
  _right_front_force_type right_front_force;
  using _right_front_valid_type =
    bool;
  _right_front_valid_type right_front_valid;
  using _right_back_force_type =
    int64_t;
  _right_back_force_type right_back_force;
  using _right_back_valid_type =
    bool;
  _right_back_valid_type right_back_valid;
  using _left_front_force_type =
    int64_t;
  _left_front_force_type left_front_force;
  using _left_front_valid_type =
    bool;
  _left_front_valid_type left_front_valid;
  using _left_back_force_type =
    int64_t;
  _left_back_force_type left_back_force;
  using _left_back_valid_type =
    bool;
  _left_back_valid_type left_back_valid;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__right_front_force(
    const int64_t & _arg)
  {
    this->right_front_force = _arg;
    return *this;
  }
  Type & set__right_front_valid(
    const bool & _arg)
  {
    this->right_front_valid = _arg;
    return *this;
  }
  Type & set__right_back_force(
    const int64_t & _arg)
  {
    this->right_back_force = _arg;
    return *this;
  }
  Type & set__right_back_valid(
    const bool & _arg)
  {
    this->right_back_valid = _arg;
    return *this;
  }
  Type & set__left_front_force(
    const int64_t & _arg)
  {
    this->left_front_force = _arg;
    return *this;
  }
  Type & set__left_front_valid(
    const bool & _arg)
  {
    this->left_front_valid = _arg;
    return *this;
  }
  Type & set__left_back_force(
    const int64_t & _arg)
  {
    this->left_back_force = _arg;
    return *this;
  }
  Type & set__left_back_valid(
    const bool & _arg)
  {
    this->left_back_valid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lapin_msgs::msg::Feet_<ContainerAllocator> *;
  using ConstRawPtr =
    const lapin_msgs::msg::Feet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lapin_msgs::msg::Feet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lapin_msgs::msg::Feet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lapin_msgs::msg::Feet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lapin_msgs::msg::Feet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lapin_msgs::msg::Feet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lapin_msgs::msg::Feet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lapin_msgs::msg::Feet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lapin_msgs::msg::Feet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lapin_msgs__msg__Feet
    std::shared_ptr<lapin_msgs::msg::Feet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lapin_msgs__msg__Feet
    std::shared_ptr<lapin_msgs::msg::Feet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Feet_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->right_front_force != other.right_front_force) {
      return false;
    }
    if (this->right_front_valid != other.right_front_valid) {
      return false;
    }
    if (this->right_back_force != other.right_back_force) {
      return false;
    }
    if (this->right_back_valid != other.right_back_valid) {
      return false;
    }
    if (this->left_front_force != other.left_front_force) {
      return false;
    }
    if (this->left_front_valid != other.left_front_valid) {
      return false;
    }
    if (this->left_back_force != other.left_back_force) {
      return false;
    }
    if (this->left_back_valid != other.left_back_valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const Feet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Feet_

// alias to use template instance with default allocator
using Feet =
  lapin_msgs::msg::Feet_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lapin_msgs

#endif  // LAPIN_MSGS__MSG__DETAIL__FEET__STRUCT_HPP_
