// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_interfaces:srv/EliminateTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_INTERFACES__SRV__DETAIL__ELIMINATE_TURTLE__BUILDER_HPP_
#define TURTLESIM_INTERFACES__SRV__DETAIL__ELIMINATE_TURTLE__BUILDER_HPP_

#include "turtlesim_interfaces/srv/detail/eliminate_turtle__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtlesim_interfaces
{

namespace srv
{

namespace builder
{

class Init_EliminateTurtle_Request_name
{
public:
  Init_EliminateTurtle_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_interfaces::srv::EliminateTurtle_Request name(::turtlesim_interfaces::srv::EliminateTurtle_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_interfaces::srv::EliminateTurtle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_interfaces::srv::EliminateTurtle_Request>()
{
  return turtlesim_interfaces::srv::builder::Init_EliminateTurtle_Request_name();
}

}  // namespace turtlesim_interfaces


namespace turtlesim_interfaces
{

namespace srv
{

namespace builder
{

class Init_EliminateTurtle_Response_success
{
public:
  Init_EliminateTurtle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_interfaces::srv::EliminateTurtle_Response success(::turtlesim_interfaces::srv::EliminateTurtle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_interfaces::srv::EliminateTurtle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_interfaces::srv::EliminateTurtle_Response>()
{
  return turtlesim_interfaces::srv::builder::Init_EliminateTurtle_Response_success();
}

}  // namespace turtlesim_interfaces

#endif  // TURTLESIM_INTERFACES__SRV__DETAIL__ELIMINATE_TURTLE__BUILDER_HPP_
