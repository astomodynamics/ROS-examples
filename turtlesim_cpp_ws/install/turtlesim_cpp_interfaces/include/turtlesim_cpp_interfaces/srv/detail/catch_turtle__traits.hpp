// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim_cpp_interfaces:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CPP_INTERFACES__SRV__DETAIL__CATCH_TURTLE__TRAITS_HPP_
#define TURTLESIM_CPP_INTERFACES__SRV__DETAIL__CATCH_TURTLE__TRAITS_HPP_

#include "turtlesim_cpp_interfaces/srv/detail/catch_turtle__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim_cpp_interfaces::srv::CatchTurtle_Request>()
{
  return "turtlesim_cpp_interfaces::srv::CatchTurtle_Request";
}

template<>
inline const char * name<turtlesim_cpp_interfaces::srv::CatchTurtle_Request>()
{
  return "turtlesim_cpp_interfaces/srv/CatchTurtle_Request";
}

template<>
struct has_fixed_size<turtlesim_cpp_interfaces::srv::CatchTurtle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtlesim_cpp_interfaces::srv::CatchTurtle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtlesim_cpp_interfaces::srv::CatchTurtle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim_cpp_interfaces::srv::CatchTurtle_Response>()
{
  return "turtlesim_cpp_interfaces::srv::CatchTurtle_Response";
}

template<>
inline const char * name<turtlesim_cpp_interfaces::srv::CatchTurtle_Response>()
{
  return "turtlesim_cpp_interfaces/srv/CatchTurtle_Response";
}

template<>
struct has_fixed_size<turtlesim_cpp_interfaces::srv::CatchTurtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim_cpp_interfaces::srv::CatchTurtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim_cpp_interfaces::srv::CatchTurtle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim_cpp_interfaces::srv::CatchTurtle>()
{
  return "turtlesim_cpp_interfaces::srv::CatchTurtle";
}

template<>
inline const char * name<turtlesim_cpp_interfaces::srv::CatchTurtle>()
{
  return "turtlesim_cpp_interfaces/srv/CatchTurtle";
}

template<>
struct has_fixed_size<turtlesim_cpp_interfaces::srv::CatchTurtle>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlesim_cpp_interfaces::srv::CatchTurtle_Request>::value &&
    has_fixed_size<turtlesim_cpp_interfaces::srv::CatchTurtle_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlesim_cpp_interfaces::srv::CatchTurtle>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlesim_cpp_interfaces::srv::CatchTurtle_Request>::value &&
    has_bounded_size<turtlesim_cpp_interfaces::srv::CatchTurtle_Response>::value
  >
{
};

template<>
struct is_service<turtlesim_cpp_interfaces::srv::CatchTurtle>
  : std::true_type
{
};

template<>
struct is_service_request<turtlesim_cpp_interfaces::srv::CatchTurtle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlesim_cpp_interfaces::srv::CatchTurtle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM_CPP_INTERFACES__SRV__DETAIL__CATCH_TURTLE__TRAITS_HPP_
