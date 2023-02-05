// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_cpp_interfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CPP_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_
#define TURTLESIM_CPP_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_

#include "turtlesim_cpp_interfaces/msg/detail/turtle_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtlesim_cpp_interfaces
{

namespace msg
{

namespace builder
{

class Init_TurtleArray_turtles
{
public:
  Init_TurtleArray_turtles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_cpp_interfaces::msg::TurtleArray turtles(::turtlesim_cpp_interfaces::msg::TurtleArray::_turtles_type arg)
  {
    msg_.turtles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_cpp_interfaces::msg::TurtleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_cpp_interfaces::msg::TurtleArray>()
{
  return turtlesim_cpp_interfaces::msg::builder::Init_TurtleArray_turtles();
}

}  // namespace turtlesim_cpp_interfaces

#endif  // TURTLESIM_CPP_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_
