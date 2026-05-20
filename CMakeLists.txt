cmake_minimum_required(VERSION 3.12)
project(two_robots)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#find the ros2 dir
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

# add the sub_dir in
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/RobotA)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/RobotB)

# add executable file
add_executable(demo main.cpp)

target_link_libraries(demo
    robot_a_lib
    robot_b_lib
    rclcpp::rclcpp
    ${std_msgs_TARGETS}
)