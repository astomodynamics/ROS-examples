// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtlesim_interfaces:srv/EliminateTurtle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtlesim_interfaces/srv/detail/eliminate_turtle__rosidl_typesupport_introspection_c.h"
#include "turtlesim_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtlesim_interfaces/srv/detail/eliminate_turtle__functions.h"
#include "turtlesim_interfaces/srv/detail/eliminate_turtle__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void EliminateTurtle_Request__rosidl_typesupport_introspection_c__EliminateTurtle_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlesim_interfaces__srv__EliminateTurtle_Request__init(message_memory);
}

void EliminateTurtle_Request__rosidl_typesupport_introspection_c__EliminateTurtle_Request_fini_function(void * message_memory)
{
  turtlesim_interfaces__srv__EliminateTurtle_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember EliminateTurtle_Request__rosidl_typesupport_introspection_c__EliminateTurtle_Request_message_member_array[1] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim_interfaces__srv__EliminateTurtle_Request, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EliminateTurtle_Request__rosidl_typesupport_introspection_c__EliminateTurtle_Request_message_members = {
  "turtlesim_interfaces__srv",  // message namespace
  "EliminateTurtle_Request",  // message name
  1,  // number of fields
  sizeof(turtlesim_interfaces__srv__EliminateTurtle_Request),
  EliminateTurtle_Request__rosidl_typesupport_introspection_c__EliminateTurtle_Request_message_member_array,  // message members
  EliminateTurtle_Request__rosidl_typesupport_introspection_c__EliminateTurtle_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  EliminateTurtle_Request__rosidl_typesupport_introspection_c__EliminateTurtle_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EliminateTurtle_Request__rosidl_typesupport_introspection_c__EliminateTurtle_Request_message_type_support_handle = {
  0,
  &EliminateTurtle_Request__rosidl_typesupport_introspection_c__EliminateTurtle_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlesim_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim_interfaces, srv, EliminateTurtle_Request)() {
  if (!EliminateTurtle_Request__rosidl_typesupport_introspection_c__EliminateTurtle_Request_message_type_support_handle.typesupport_identifier) {
    EliminateTurtle_Request__rosidl_typesupport_introspection_c__EliminateTurtle_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EliminateTurtle_Request__rosidl_typesupport_introspection_c__EliminateTurtle_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "turtlesim_interfaces/srv/detail/eliminate_turtle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "turtlesim_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "turtlesim_interfaces/srv/detail/eliminate_turtle__functions.h"
// already included above
// #include "turtlesim_interfaces/srv/detail/eliminate_turtle__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void EliminateTurtle_Response__rosidl_typesupport_introspection_c__EliminateTurtle_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlesim_interfaces__srv__EliminateTurtle_Response__init(message_memory);
}

void EliminateTurtle_Response__rosidl_typesupport_introspection_c__EliminateTurtle_Response_fini_function(void * message_memory)
{
  turtlesim_interfaces__srv__EliminateTurtle_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember EliminateTurtle_Response__rosidl_typesupport_introspection_c__EliminateTurtle_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim_interfaces__srv__EliminateTurtle_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EliminateTurtle_Response__rosidl_typesupport_introspection_c__EliminateTurtle_Response_message_members = {
  "turtlesim_interfaces__srv",  // message namespace
  "EliminateTurtle_Response",  // message name
  1,  // number of fields
  sizeof(turtlesim_interfaces__srv__EliminateTurtle_Response),
  EliminateTurtle_Response__rosidl_typesupport_introspection_c__EliminateTurtle_Response_message_member_array,  // message members
  EliminateTurtle_Response__rosidl_typesupport_introspection_c__EliminateTurtle_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  EliminateTurtle_Response__rosidl_typesupport_introspection_c__EliminateTurtle_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EliminateTurtle_Response__rosidl_typesupport_introspection_c__EliminateTurtle_Response_message_type_support_handle = {
  0,
  &EliminateTurtle_Response__rosidl_typesupport_introspection_c__EliminateTurtle_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlesim_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim_interfaces, srv, EliminateTurtle_Response)() {
  if (!EliminateTurtle_Response__rosidl_typesupport_introspection_c__EliminateTurtle_Response_message_type_support_handle.typesupport_identifier) {
    EliminateTurtle_Response__rosidl_typesupport_introspection_c__EliminateTurtle_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EliminateTurtle_Response__rosidl_typesupport_introspection_c__EliminateTurtle_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtlesim_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "turtlesim_interfaces/srv/detail/eliminate_turtle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers turtlesim_interfaces__srv__detail__eliminate_turtle__rosidl_typesupport_introspection_c__EliminateTurtle_service_members = {
  "turtlesim_interfaces__srv",  // service namespace
  "EliminateTurtle",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // turtlesim_interfaces__srv__detail__eliminate_turtle__rosidl_typesupport_introspection_c__EliminateTurtle_Request_message_type_support_handle,
  NULL  // response message
  // turtlesim_interfaces__srv__detail__eliminate_turtle__rosidl_typesupport_introspection_c__EliminateTurtle_Response_message_type_support_handle
};

static rosidl_service_type_support_t turtlesim_interfaces__srv__detail__eliminate_turtle__rosidl_typesupport_introspection_c__EliminateTurtle_service_type_support_handle = {
  0,
  &turtlesim_interfaces__srv__detail__eliminate_turtle__rosidl_typesupport_introspection_c__EliminateTurtle_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim_interfaces, srv, EliminateTurtle_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim_interfaces, srv, EliminateTurtle_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlesim_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim_interfaces, srv, EliminateTurtle)() {
  if (!turtlesim_interfaces__srv__detail__eliminate_turtle__rosidl_typesupport_introspection_c__EliminateTurtle_service_type_support_handle.typesupport_identifier) {
    turtlesim_interfaces__srv__detail__eliminate_turtle__rosidl_typesupport_introspection_c__EliminateTurtle_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)turtlesim_interfaces__srv__detail__eliminate_turtle__rosidl_typesupport_introspection_c__EliminateTurtle_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim_interfaces, srv, EliminateTurtle_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim_interfaces, srv, EliminateTurtle_Response)()->data;
  }

  return &turtlesim_interfaces__srv__detail__eliminate_turtle__rosidl_typesupport_introspection_c__EliminateTurtle_service_type_support_handle;
}
