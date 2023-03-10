cmake_minimum_required(VERSION 3.5)
project(turtlesim_cpp_chaser)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(turtlesim_cpp_interfaces REQUIRED)
find_package(turtlesim REQUIRED)
find_package(geometry_msgs REQUIRED)

add_executable(turtle_cpp_controller src/turtle_cpp_controller.cpp)
ament_target_dependencies(turtle_cpp_controller rclcpp turtlesim turtlesim_cpp_interfaces geometry_msgs)

add_executable(turtle_cpp_spawner src/turtle_cpp_spawner.cpp)
ament_target_dependencies(turtle_cpp_spawner rclcpp turtlesim turtlesim_cpp_interfaces)

install(TARGETS
  turtle_cpp_controller
  turtle_cpp_spawner
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
