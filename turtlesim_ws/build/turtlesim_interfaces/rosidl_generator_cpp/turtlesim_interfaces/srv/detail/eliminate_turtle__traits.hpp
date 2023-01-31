// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim_interfaces:srv/EliminateTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_INTERFACES__SRV__DETAIL__ELIMINATE_TURTLE__TRAITS_HPP_
#define TURTLESIM_INTERFACES__SRV__DETAIL__ELIMINATE_TURTLE__TRAITS_HPP_

#include "turtlesim_interfaces/srv/detail/eliminate_turtle__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim_interfaces::srv::EliminateTurtle_Request>()
{
  return "turtlesim_interfaces::srv::EliminateTurtle_Request";
}

template<>
inline const char * name<turtlesim_interfaces::srv::EliminateTurtle_Request>()
{
  return "turtlesim_interfaces/srv/EliminateTurtle_Request";
}

template<>
struct has_fixed_size<turtlesim_interfaces::srv::EliminateTurtle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtlesim_interfaces::srv::EliminateTurtle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtlesim_interfaces::srv::EliminateTurtle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim_interfaces::srv::EliminateTurtle_Response>()
{
  return "turtlesim_interfaces::srv::EliminateTurtle_Response";
}

template<>
inline const char * name<turtlesim_interfaces::srv::EliminateTurtle_Response>()
{
  return "turtlesim_interfaces/srv/EliminateTurtle_Response";
}

template<>
struct has_fixed_size<turtlesim_interfaces::srv::EliminateTurtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim_interfaces::srv::EliminateTurtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim_interfaces::srv::EliminateTurtle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim_interfaces::srv::EliminateTurtle>()
{
  return "turtlesim_interfaces::srv::EliminateTurtle";
}

template<>
inline const char * name<turtlesim_interfaces::srv::EliminateTurtle>()
{
  return "turtlesim_interfaces/srv/EliminateTurtle";
}

template<>
struct has_fixed_size<turtlesim_interfaces::srv::EliminateTurtle>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlesim_interfaces::srv::EliminateTurtle_Request>::value &&
    has_fixed_size<turtlesim_interfaces::srv::EliminateTurtle_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlesim_interfaces::srv::EliminateTurtle>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlesim_interfaces::srv::EliminateTurtle_Request>::value &&
    has_bounded_size<turtlesim_interfaces::srv::EliminateTurtle_Response>::value
  >
{
};

template<>
struct is_service<turtlesim_interfaces::srv::EliminateTurtle>
  : std::true_type
{
};

template<>
struct is_service_request<turtlesim_interfaces::srv::EliminateTurtle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlesim_interfaces::srv::EliminateTurtle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM_INTERFACES__SRV__DETAIL__ELIMINATE_TURTLE__TRAITS_HPP_
