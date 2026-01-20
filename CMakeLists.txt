cmake_minimum_required(VERSION 3.8)
project(common)

find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/OculusControllers.msg"
  "msg/OculusInitJointState.msg"
  DEPENDENCIES std_msgs geometry_msgs sensor_msgs
)

ament_python_install_package(common_utils)

install(DIRECTORY include/
  DESTINATION include
)

ament_export_include_directories(include)
ament_export_dependencies(rclcpp)
ament_export_dependencies(rosidl_default_runtime)
ament_package()
