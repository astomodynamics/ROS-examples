// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtlesim_cpp_interfaces:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtlesim_cpp_interfaces/srv/detail/catch_turtle__rosidl_typesupport_introspection_c.h"
#include "turtlesim_cpp_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtlesim_cpp_interfaces/srv/detail/catch_turtle__functions.h"
#include "turtlesim_cpp_interfaces/srv/detail/catch_turtle__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlesim_cpp_interfaces__srv__CatchTurtle_Request__init(message_memory);
}

void CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_fini_function(void * message_memory)
{
  turtlesim_cpp_interfaces__srv__CatchTurtle_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_message_member_array[1] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim_cpp_interfaces__srv__CatchTurtle_Request, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_message_members = {
  "turtlesim_cpp_interfaces__srv",  // message namespace
  "CatchTurtle_Request",  // message name
  1,  // number of fields
  sizeof(turtlesim_cpp_interfaces__srv__CatchTurtle_Request),
  CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_message_member_array,  // message members
  CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_message_type_support_handle = {
  0,
  &CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlesim_cpp_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim_cpp_interfaces, srv, CatchTurtle_Request)() {
  if (!CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_message_type_support_handle.typesupport_identifier) {
    CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CatchTurtle_Request__rosidl_typesupport_introspection_c__CatchTurtle_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "turtlesim_cpp_interfaces/srv/detail/catch_turtle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "turtlesim_cpp_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "turtlesim_cpp_interfaces/srv/detail/catch_turtle__functions.h"
// already included above
// #include "turtlesim_cpp_interfaces/srv/detail/catch_turtle__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlesim_cpp_interfaces__srv__CatchTurtle_Response__init(message_memory);
}

void CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_fini_function(void * message_memory)
{
  turtlesim_cpp_interfaces__srv__CatchTurtle_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim_cpp_interfaces__srv__CatchTurtle_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_message_members = {
  "turtlesim_cpp_interfaces__srv",  // message namespace
  "CatchTurtle_Response",  // message name
  1,  // number of fields
  sizeof(turtlesim_cpp_interfaces__srv__CatchTurtle_Response),
  CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_message_member_array,  // message members
  CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_message_type_support_handle = {
  0,
  &CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlesim_cpp_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim_cpp_interfaces, srv, CatchTurtle_Response)() {
  if (!CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_message_type_support_handle.typesupport_identifier) {
    CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CatchTurtle_Response__rosidl_typesupport_introspection_c__CatchTurtle_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtlesim_cpp_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "turtlesim_cpp_interfaces/srv/detail/catch_turtle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers turtlesim_cpp_interfaces__srv__detail__catch_turtle__rosidl_typesupport_introspection_c__CatchTurtle_service_members = {
  "turtlesim_cpp_interfaces__srv",  // service namespace
  "CatchTurtle",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // turtlesim_cpp_interfaces__srv__detail__catch_turtle__rosidl_typesupport_introspection_c__CatchTurtle_Request_message_type_support_handle,
  NULL  // response message
  // turtlesim_cpp_interfaces__srv__detail__catch_turtle__rosidl_typesupport_introspection_c__CatchTurtle_Response_message_type_support_handle
};

static rosidl_service_type_support_t turtlesim_cpp_interfaces__srv__detail__catch_turtle__rosidl_typesupport_introspection_c__CatchTurtle_service_type_support_handle = {
  0,
  &turtlesim_cpp_interfaces__srv__detail__catch_turtle__rosidl_typesupport_introspection_c__CatchTurtle_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim_cpp_interfaces, srv, CatchTurtle_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim_cpp_interfaces, srv, CatchTurtle_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlesim_cpp_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim_cpp_interfaces, srv, CatchTurtle)() {
  if (!turtlesim_cpp_interfaces__srv__detail__catch_turtle__rosidl_typesupport_introspection_c__CatchTurtle_service_type_support_handle.typesupport_identifier) {
    turtlesim_cpp_interfaces__srv__detail__catch_turtle__rosidl_typesupport_introspection_c__CatchTurtle_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)turtlesim_cpp_interfaces__srv__detail__catch_turtle__rosidl_typesupport_introspection_c__CatchTurtle_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim_cpp_interfaces, srv, CatchTurtle_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim_cpp_interfaces, srv, CatchTurtle_Response)()->data;
  }

  return &turtlesim_cpp_interfaces__srv__detail__catch_turtle__rosidl_typesupport_introspection_c__CatchTurtle_service_type_support_handle;
}
