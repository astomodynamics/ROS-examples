// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_cpp_interfaces:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CPP_INTERFACES__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_
#define TURTLESIM_CPP_INTERFACES__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_

#include "turtlesim_cpp_interfaces/srv/detail/catch_turtle__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtlesim_cpp_interfaces
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Request_name
{
public:
  Init_CatchTurtle_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_cpp_interfaces::srv::CatchTurtle_Request name(::turtlesim_cpp_interfaces::srv::CatchTurtle_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_cpp_interfaces::srv::CatchTurtle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_cpp_interfaces::srv::CatchTurtle_Request>()
{
  return turtlesim_cpp_interfaces::srv::builder::Init_CatchTurtle_Request_name();
}

}  // namespace turtlesim_cpp_interfaces


namespace turtlesim_cpp_interfaces
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Response_success
{
public:
  Init_CatchTurtle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_cpp_interfaces::srv::CatchTurtle_Response success(::turtlesim_cpp_interfaces::srv::CatchTurtle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_cpp_interfaces::srv::CatchTurtle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_cpp_interfaces::srv::CatchTurtle_Response>()
{
  return turtlesim_cpp_interfaces::srv::builder::Init_CatchTurtle_Response_success();
}

}  // namespace turtlesim_cpp_interfaces

#endif  // TURTLESIM_CPP_INTERFACES__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_
