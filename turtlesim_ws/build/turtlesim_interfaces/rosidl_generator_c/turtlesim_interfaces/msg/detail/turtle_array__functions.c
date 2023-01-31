// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtlesim_interfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice
#include "turtlesim_interfaces/msg/detail/turtle_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `turtles`
#include "turtlesim_interfaces/msg/detail/turtle__functions.h"

bool
turtlesim_interfaces__msg__TurtleArray__init(turtlesim_interfaces__msg__TurtleArray * msg)
{
  if (!msg) {
    return false;
  }
  // turtles
  if (!turtlesim_interfaces__msg__Turtle__Sequence__init(&msg->turtles, 0)) {
    turtlesim_interfaces__msg__TurtleArray__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim_interfaces__msg__TurtleArray__fini(turtlesim_interfaces__msg__TurtleArray * msg)
{
  if (!msg) {
    return;
  }
  // turtles
  turtlesim_interfaces__msg__Turtle__Sequence__fini(&msg->turtles);
}

bool
turtlesim_interfaces__msg__TurtleArray__are_equal(const turtlesim_interfaces__msg__TurtleArray * lhs, const turtlesim_interfaces__msg__TurtleArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // turtles
  if (!turtlesim_interfaces__msg__Turtle__Sequence__are_equal(
      &(lhs->turtles), &(rhs->turtles)))
  {
    return false;
  }
  return true;
}

bool
turtlesim_interfaces__msg__TurtleArray__copy(
  const turtlesim_interfaces__msg__TurtleArray * input,
  turtlesim_interfaces__msg__TurtleArray * output)
{
  if (!input || !output) {
    return false;
  }
  // turtles
  if (!turtlesim_interfaces__msg__Turtle__Sequence__copy(
      &(input->turtles), &(output->turtles)))
  {
    return false;
  }
  return true;
}

turtlesim_interfaces__msg__TurtleArray *
turtlesim_interfaces__msg__TurtleArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_interfaces__msg__TurtleArray * msg = (turtlesim_interfaces__msg__TurtleArray *)allocator.allocate(sizeof(turtlesim_interfaces__msg__TurtleArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_interfaces__msg__TurtleArray));
  bool success = turtlesim_interfaces__msg__TurtleArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_interfaces__msg__TurtleArray__destroy(turtlesim_interfaces__msg__TurtleArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_interfaces__msg__TurtleArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_interfaces__msg__TurtleArray__Sequence__init(turtlesim_interfaces__msg__TurtleArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_interfaces__msg__TurtleArray * data = NULL;

  if (size) {
    data = (turtlesim_interfaces__msg__TurtleArray *)allocator.zero_allocate(size, sizeof(turtlesim_interfaces__msg__TurtleArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_interfaces__msg__TurtleArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_interfaces__msg__TurtleArray__fini(&data[i - 1]);
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
turtlesim_interfaces__msg__TurtleArray__Sequence__fini(turtlesim_interfaces__msg__TurtleArray__Sequence * array)
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
      turtlesim_interfaces__msg__TurtleArray__fini(&array->data[i]);
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

turtlesim_interfaces__msg__TurtleArray__Sequence *
turtlesim_interfaces__msg__TurtleArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_interfaces__msg__TurtleArray__Sequence * array = (turtlesim_interfaces__msg__TurtleArray__Sequence *)allocator.allocate(sizeof(turtlesim_interfaces__msg__TurtleArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_interfaces__msg__TurtleArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_interfaces__msg__TurtleArray__Sequence__destroy(turtlesim_interfaces__msg__TurtleArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_interfaces__msg__TurtleArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_interfaces__msg__TurtleArray__Sequence__are_equal(const turtlesim_interfaces__msg__TurtleArray__Sequence * lhs, const turtlesim_interfaces__msg__TurtleArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_interfaces__msg__TurtleArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_interfaces__msg__TurtleArray__Sequence__copy(
  const turtlesim_interfaces__msg__TurtleArray__Sequence * input,
  turtlesim_interfaces__msg__TurtleArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_interfaces__msg__TurtleArray);
    turtlesim_interfaces__msg__TurtleArray * data =
      (turtlesim_interfaces__msg__TurtleArray *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_interfaces__msg__TurtleArray__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtlesim_interfaces__msg__TurtleArray__fini(&data[i]);
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
    if (!turtlesim_interfaces__msg__TurtleArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
