// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim_cpp_interfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CPP_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_
#define TURTLESIM_CPP_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'turtles'
#include "turtlesim_cpp_interfaces/msg/detail/turtle__struct.h"

// Struct defined in msg/TurtleArray in the package turtlesim_cpp_interfaces.
typedef struct turtlesim_cpp_interfaces__msg__TurtleArray
{
  turtlesim_cpp_interfaces__msg__Turtle__Sequence turtles;
} turtlesim_cpp_interfaces__msg__TurtleArray;

// Struct for a sequence of turtlesim_cpp_interfaces__msg__TurtleArray.
typedef struct turtlesim_cpp_interfaces__msg__TurtleArray__Sequence
{
  turtlesim_cpp_interfaces__msg__TurtleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_cpp_interfaces__msg__TurtleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_CPP_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_
