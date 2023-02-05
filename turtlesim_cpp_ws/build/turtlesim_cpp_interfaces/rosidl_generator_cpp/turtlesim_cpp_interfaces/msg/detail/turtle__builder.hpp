// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_cpp_interfaces:msg/Turtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CPP_INTERFACES__MSG__DETAIL__TURTLE__BUILDER_HPP_
#define TURTLESIM_CPP_INTERFACES__MSG__DETAIL__TURTLE__BUILDER_HPP_

#include "turtlesim_cpp_interfaces/msg/detail/turtle__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtlesim_cpp_interfaces
{

namespace msg
{

namespace builder
{

class Init_Turtle_theta
{
public:
  explicit Init_Turtle_theta(::turtlesim_cpp_interfaces::msg::Turtle & msg)
  : msg_(msg)
  {}
  ::turtlesim_cpp_interfaces::msg::Turtle theta(::turtlesim_cpp_interfaces::msg::Turtle::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_cpp_interfaces::msg::Turtle msg_;
};

class Init_Turtle_y
{
public:
  explicit Init_Turtle_y(::turtlesim_cpp_interfaces::msg::Turtle & msg)
  : msg_(msg)
  {}
  Init_Turtle_theta y(::turtlesim_cpp_interfaces::msg::Turtle::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Turtle_theta(msg_);
  }

private:
  ::turtlesim_cpp_interfaces::msg::Turtle msg_;
};

class Init_Turtle_x
{
public:
  explicit Init_Turtle_x(::turtlesim_cpp_interfaces::msg::Turtle & msg)
  : msg_(msg)
  {}
  Init_Turtle_y x(::turtlesim_cpp_interfaces::msg::Turtle::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Turtle_y(msg_);
  }

private:
  ::turtlesim_cpp_interfaces::msg::Turtle msg_;
};

class Init_Turtle_name
{
public:
  Init_Turtle_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Turtle_x name(::turtlesim_cpp_interfaces::msg::Turtle::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Turtle_x(msg_);
  }

private:
  ::turtlesim_cpp_interfaces::msg::Turtle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_cpp_interfaces::msg::Turtle>()
{
  return turtlesim_cpp_interfaces::msg::builder::Init_Turtle_name();
}

}  // namespace turtlesim_cpp_interfaces

#endif  // TURTLESIM_CPP_INTERFACES__MSG__DETAIL__TURTLE__BUILDER_HPP_
