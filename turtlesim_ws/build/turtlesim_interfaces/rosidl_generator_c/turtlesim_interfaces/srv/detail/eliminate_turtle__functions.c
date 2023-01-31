// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtlesim_interfaces:srv/EliminateTurtle.idl
// generated code does not contain a copyright notice
#include "turtlesim_interfaces/srv/detail/eliminate_turtle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
turtlesim_interfaces__srv__EliminateTurtle_Request__init(turtlesim_interfaces__srv__EliminateTurtle_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    turtlesim_interfaces__srv__EliminateTurtle_Request__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim_interfaces__srv__EliminateTurtle_Request__fini(turtlesim_interfaces__srv__EliminateTurtle_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
turtlesim_interfaces__srv__EliminateTurtle_Request__are_equal(const turtlesim_interfaces__srv__EliminateTurtle_Request * lhs, const turtlesim_interfaces__srv__EliminateTurtle_Request * rhs)
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
  return true;
}

bool
turtlesim_interfaces__srv__EliminateTurtle_Request__copy(
  const turtlesim_interfaces__srv__EliminateTurtle_Request * input,
  turtlesim_interfaces__srv__EliminateTurtle_Request * output)
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
  return true;
}

turtlesim_interfaces__srv__EliminateTurtle_Request *
turtlesim_interfaces__srv__EliminateTurtle_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_interfaces__srv__EliminateTurtle_Request * msg = (turtlesim_interfaces__srv__EliminateTurtle_Request *)allocator.allocate(sizeof(turtlesim_interfaces__srv__EliminateTurtle_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_interfaces__srv__EliminateTurtle_Request));
  bool success = turtlesim_interfaces__srv__EliminateTurtle_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_interfaces__srv__EliminateTurtle_Request__destroy(turtlesim_interfaces__srv__EliminateTurtle_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_interfaces__srv__EliminateTurtle_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_interfaces__srv__EliminateTurtle_Request__Sequence__init(turtlesim_interfaces__srv__EliminateTurtle_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_interfaces__srv__EliminateTurtle_Request * data = NULL;

  if (size) {
    data = (turtlesim_interfaces__srv__EliminateTurtle_Request *)allocator.zero_allocate(size, sizeof(turtlesim_interfaces__srv__EliminateTurtle_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_interfaces__srv__EliminateTurtle_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_interfaces__srv__EliminateTurtle_Request__fini(&data[i - 1]);
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
turtlesim_interfaces__srv__EliminateTurtle_Request__Sequence__fini(turtlesim_interfaces__srv__EliminateTurtle_Request__Sequence * array)
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
      turtlesim_interfaces__srv__EliminateTurtle_Request__fini(&array->data[i]);
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

turtlesim_interfaces__srv__EliminateTurtle_Request__Sequence *
turtlesim_interfaces__srv__EliminateTurtle_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_interfaces__srv__EliminateTurtle_Request__Sequence * array = (turtlesim_interfaces__srv__EliminateTurtle_Request__Sequence *)allocator.allocate(sizeof(turtlesim_interfaces__srv__EliminateTurtle_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_interfaces__srv__EliminateTurtle_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_interfaces__srv__EliminateTurtle_Request__Sequence__destroy(turtlesim_interfaces__srv__EliminateTurtle_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_interfaces__srv__EliminateTurtle_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_interfaces__srv__EliminateTurtle_Request__Sequence__are_equal(const turtlesim_interfaces__srv__EliminateTurtle_Request__Sequence * lhs, const turtlesim_interfaces__srv__EliminateTurtle_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_interfaces__srv__EliminateTurtle_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_interfaces__srv__EliminateTurtle_Request__Sequence__copy(
  const turtlesim_interfaces__srv__EliminateTurtle_Request__Sequence * input,
  turtlesim_interfaces__srv__EliminateTurtle_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_interfaces__srv__EliminateTurtle_Request);
    turtlesim_interfaces__srv__EliminateTurtle_Request * data =
      (turtlesim_interfaces__srv__EliminateTurtle_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_interfaces__srv__EliminateTurtle_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtlesim_interfaces__srv__EliminateTurtle_Request__fini(&data[i]);
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
    if (!turtlesim_interfaces__srv__EliminateTurtle_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
turtlesim_interfaces__srv__EliminateTurtle_Response__init(turtlesim_interfaces__srv__EliminateTurtle_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
turtlesim_interfaces__srv__EliminateTurtle_Response__fini(turtlesim_interfaces__srv__EliminateTurtle_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
turtlesim_interfaces__srv__EliminateTurtle_Response__are_equal(const turtlesim_interfaces__srv__EliminateTurtle_Response * lhs, const turtlesim_interfaces__srv__EliminateTurtle_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
turtlesim_interfaces__srv__EliminateTurtle_Response__copy(
  const turtlesim_interfaces__srv__EliminateTurtle_Response * input,
  turtlesim_interfaces__srv__EliminateTurtle_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

turtlesim_interfaces__srv__EliminateTurtle_Response *
turtlesim_interfaces__srv__EliminateTurtle_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_interfaces__srv__EliminateTurtle_Response * msg = (turtlesim_interfaces__srv__EliminateTurtle_Response *)allocator.allocate(sizeof(turtlesim_interfaces__srv__EliminateTurtle_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_interfaces__srv__EliminateTurtle_Response));
  bool success = turtlesim_interfaces__srv__EliminateTurtle_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_interfaces__srv__EliminateTurtle_Response__destroy(turtlesim_interfaces__srv__EliminateTurtle_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_interfaces__srv__EliminateTurtle_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_interfaces__srv__EliminateTurtle_Response__Sequence__init(turtlesim_interfaces__srv__EliminateTurtle_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_interfaces__srv__EliminateTurtle_Response * data = NULL;

  if (size) {
    data = (turtlesim_interfaces__srv__EliminateTurtle_Response *)allocator.zero_allocate(size, sizeof(turtlesim_interfaces__srv__EliminateTurtle_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_interfaces__srv__EliminateTurtle_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_interfaces__srv__EliminateTurtle_Response__fini(&data[i - 1]);
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
turtlesim_interfaces__srv__EliminateTurtle_Response__Sequence__fini(turtlesim_interfaces__srv__EliminateTurtle_Response__Sequence * array)
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
      turtlesim_interfaces__srv__EliminateTurtle_Response__fini(&array->data[i]);
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

turtlesim_interfaces__srv__EliminateTurtle_Response__Sequence *
turtlesim_interfaces__srv__EliminateTurtle_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_interfaces__srv__EliminateTurtle_Response__Sequence * array = (turtlesim_interfaces__srv__EliminateTurtle_Response__Sequence *)allocator.allocate(sizeof(turtlesim_interfaces__srv__EliminateTurtle_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_interfaces__srv__EliminateTurtle_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_interfaces__srv__EliminateTurtle_Response__Sequence__destroy(turtlesim_interfaces__srv__EliminateTurtle_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_interfaces__srv__EliminateTurtle_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_interfaces__srv__EliminateTurtle_Response__Sequence__are_equal(const turtlesim_interfaces__srv__EliminateTurtle_Response__Sequence * lhs, const turtlesim_interfaces__srv__EliminateTurtle_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_interfaces__srv__EliminateTurtle_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_interfaces__srv__EliminateTurtle_Response__Sequence__copy(
  const turtlesim_interfaces__srv__EliminateTurtle_Response__Sequence * input,
  turtlesim_interfaces__srv__EliminateTurtle_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_interfaces__srv__EliminateTurtle_Response);
    turtlesim_interfaces__srv__EliminateTurtle_Response * data =
      (turtlesim_interfaces__srv__EliminateTurtle_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_interfaces__srv__EliminateTurtle_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtlesim_interfaces__srv__EliminateTurtle_Response__fini(&data[i]);
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
    if (!turtlesim_interfaces__srv__EliminateTurtle_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
