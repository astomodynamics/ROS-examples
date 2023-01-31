// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim_interfaces:srv/EliminateTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_INTERFACES__SRV__DETAIL__ELIMINATE_TURTLE__STRUCT_H_
#define TURTLESIM_INTERFACES__SRV__DETAIL__ELIMINATE_TURTLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/EliminateTurtle in the package turtlesim_interfaces.
typedef struct turtlesim_interfaces__srv__EliminateTurtle_Request
{
  rosidl_runtime_c__String name;
} turtlesim_interfaces__srv__EliminateTurtle_Request;

// Struct for a sequence of turtlesim_interfaces__srv__EliminateTurtle_Request.
typedef struct turtlesim_interfaces__srv__EliminateTurtle_Request__Sequence
{
  turtlesim_interfaces__srv__EliminateTurtle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_interfaces__srv__EliminateTurtle_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/EliminateTurtle in the package turtlesim_interfaces.
typedef struct turtlesim_interfaces__srv__EliminateTurtle_Response
{
  bool success;
} turtlesim_interfaces__srv__EliminateTurtle_Response;

// Struct for a sequence of turtlesim_interfaces__srv__EliminateTurtle_Response.
typedef struct turtlesim_interfaces__srv__EliminateTurtle_Response__Sequence
{
  turtlesim_interfaces__srv__EliminateTurtle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_interfaces__srv__EliminateTurtle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_INTERFACES__SRV__DETAIL__ELIMINATE_TURTLE__STRUCT_H_
