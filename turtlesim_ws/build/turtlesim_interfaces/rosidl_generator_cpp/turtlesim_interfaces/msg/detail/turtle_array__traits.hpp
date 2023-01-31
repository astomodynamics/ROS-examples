// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim_interfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__TRAITS_HPP_
#define TURTLESIM_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__TRAITS_HPP_

#include "turtlesim_interfaces/msg/detail/turtle_array__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim_interfaces::msg::TurtleArray>()
{
  return "turtlesim_interfaces::msg::TurtleArray";
}

template<>
inline const char * name<turtlesim_interfaces::msg::TurtleArray>()
{
  return "turtlesim_interfaces/msg/TurtleArray";
}

template<>
struct has_fixed_size<turtlesim_interfaces::msg::TurtleArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtlesim_interfaces::msg::TurtleArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtlesim_interfaces::msg::TurtleArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__TRAITS_HPP_
