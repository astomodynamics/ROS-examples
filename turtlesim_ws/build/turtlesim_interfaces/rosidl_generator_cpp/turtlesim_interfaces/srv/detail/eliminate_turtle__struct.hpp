// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtlesim_interfaces:srv/EliminateTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_INTERFACES__SRV__DETAIL__ELIMINATE_TURTLE__STRUCT_HPP_
#define TURTLESIM_INTERFACES__SRV__DETAIL__ELIMINATE_TURTLE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__turtlesim_interfaces__srv__EliminateTurtle_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_interfaces__srv__EliminateTurtle_Request __declspec(deprecated)
#endif

namespace turtlesim_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EliminateTurtle_Request_
{
  using Type = EliminateTurtle_Request_<ContainerAllocator>;

  explicit EliminateTurtle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit EliminateTurtle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim_interfaces::srv::EliminateTurtle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_interfaces::srv::EliminateTurtle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_interfaces::srv::EliminateTurtle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_interfaces::srv::EliminateTurtle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_interfaces::srv::EliminateTurtle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_interfaces::srv::EliminateTurtle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_interfaces::srv::EliminateTurtle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_interfaces::srv::EliminateTurtle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_interfaces::srv::EliminateTurtle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_interfaces::srv::EliminateTurtle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_interfaces__srv__EliminateTurtle_Request
    std::shared_ptr<turtlesim_interfaces::srv::EliminateTurtle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_interfaces__srv__EliminateTurtle_Request
    std::shared_ptr<turtlesim_interfaces::srv::EliminateTurtle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EliminateTurtle_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const EliminateTurtle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EliminateTurtle_Request_

// alias to use template instance with default allocator
using EliminateTurtle_Request =
  turtlesim_interfaces::srv::EliminateTurtle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlesim_interfaces


#ifndef _WIN32
# define DEPRECATED__turtlesim_interfaces__srv__EliminateTurtle_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_interfaces__srv__EliminateTurtle_Response __declspec(deprecated)
#endif

namespace turtlesim_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EliminateTurtle_Response_
{
  using Type = EliminateTurtle_Response_<ContainerAllocator>;

  explicit EliminateTurtle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit EliminateTurtle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim_interfaces::srv::EliminateTurtle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_interfaces::srv::EliminateTurtle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_interfaces::srv::EliminateTurtle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_interfaces::srv::EliminateTurtle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_interfaces::srv::EliminateTurtle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_interfaces::srv::EliminateTurtle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_interfaces::srv::EliminateTurtle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_interfaces::srv::EliminateTurtle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_interfaces::srv::EliminateTurtle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_interfaces::srv::EliminateTurtle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_interfaces__srv__EliminateTurtle_Response
    std::shared_ptr<turtlesim_interfaces::srv::EliminateTurtle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_interfaces__srv__EliminateTurtle_Response
    std::shared_ptr<turtlesim_interfaces::srv::EliminateTurtle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EliminateTurtle_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const EliminateTurtle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EliminateTurtle_Response_

// alias to use template instance with default allocator
using EliminateTurtle_Response =
  turtlesim_interfaces::srv::EliminateTurtle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlesim_interfaces

namespace turtlesim_interfaces
{

namespace srv
{

struct EliminateTurtle
{
  using Request = turtlesim_interfaces::srv::EliminateTurtle_Request;
  using Response = turtlesim_interfaces::srv::EliminateTurtle_Response;
};

}  // namespace srv

}  // namespace turtlesim_interfaces

#endif  // TURTLESIM_INTERFACES__SRV__DETAIL__ELIMINATE_TURTLE__STRUCT_HPP_
