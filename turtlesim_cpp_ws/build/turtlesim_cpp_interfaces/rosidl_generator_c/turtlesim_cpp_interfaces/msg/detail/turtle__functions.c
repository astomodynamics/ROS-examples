// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtlesim_cpp_interfaces:msg/Turtle.idl
// generated code does not contain a copyright notice
#include "turtlesim_cpp_interfaces/msg/detail/turtle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
turtlesim_cpp_interfaces__msg__Turtle__init(turtlesim_cpp_interfaces__msg__Turtle * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    turtlesim_cpp_interfaces__msg__Turtle__fini(msg);
    return false;
  }
  // x
  // y
  // theta
  return true;
}

void
turtlesim_cpp_interfaces__msg__Turtle__fini(turtlesim_cpp_interfaces__msg__Turtle * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // x
  // y
  // theta
}

bool
turtlesim_cpp_interfaces__msg__Turtle__are_equal(const turtlesim_cpp_interfaces__msg__Turtle * lhs, const turtlesim_cpp_interfaces__msg__Turtle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  return true;
}

bool
turtlesim_cpp_interfaces__msg__Turtle__copy(
  const turtlesim_cpp_interfaces__msg__Turtle * input,
  turtlesim_cpp_interfaces__msg__Turtle * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // theta
  output->theta = input->theta;
  return true;
}

turtlesim_cpp_interfaces__msg__Turtle *
turtlesim_cpp_interfaces__msg__Turtle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_cpp_interfaces__msg__Turtle * msg = (turtlesim_cpp_interfaces__msg__Turtle *)allocator.allocate(sizeof(turtlesim_cpp_interfaces__msg__Turtle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_cpp_interfaces__msg__Turtle));
  bool success = turtlesim_cpp_interfaces__msg__Turtle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_cpp_interfaces__msg__Turtle__destroy(turtlesim_cpp_interfaces__msg__Turtle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_cpp_interfaces__msg__Turtle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_cpp_interfaces__msg__Turtle__Sequence__init(turtlesim_cpp_interfaces__msg__Turtle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_cpp_interfaces__msg__Turtle * data = NULL;

  if (size) {
    data = (turtlesim_cpp_interfaces__msg__Turtle *)allocator.zero_allocate(size, sizeof(turtlesim_cpp_interfaces__msg__Turtle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_cpp_interfaces__msg__Turtle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_cpp_interfaces__msg__Turtle__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtlesim_cpp_interfaces__msg__Turtle__Sequence__fini(turtlesim_cpp_interfaces__msg__Turtle__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlesim_cpp_interfaces__msg__Turtle__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtlesim_cpp_interfaces__msg__Turtle__Sequence *
turtlesim_cpp_interfaces__msg__Turtle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_cpp_interfaces__msg__Turtle__Sequence * array = (turtlesim_cpp_interfaces__msg__Turtle__Sequence *)allocator.allocate(sizeof(turtlesim_cpp_interfaces__msg__Turtle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_cpp_interfaces__msg__Turtle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_cpp_interfaces__msg__Turtle__Sequence__destroy(turtlesim_cpp_interfaces__msg__Turtle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_cpp_interfaces__msg__Turtle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_cpp_interfaces__msg__Turtle__Sequence__are_equal(const turtlesim_cpp_interfaces__msg__Turtle__Sequence * lhs, const turtlesim_cpp_interfaces__msg__Turtle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_cpp_interfaces__msg__Turtle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_cpp_interfaces__msg__Turtle__Sequence__copy(
  const turtlesim_cpp_interfaces__msg__Turtle__Sequence * input,
  turtlesim_cpp_interfaces__msg__Turtle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_cpp_interfaces__msg__Turtle);
    turtlesim_cpp_interfaces__msg__Turtle * data =
      (turtlesim_cpp_interfaces__msg__Turtle *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_cpp_interfaces__msg__Turtle__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtlesim_cpp_interfaces__msg__Turtle__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim_cpp_interfaces__msg__Turtle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
