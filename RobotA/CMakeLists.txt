
add_library(robot_a_lib
    src/RobotA.cpp
)

target_include_directories(robot_a_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

ament_target_dependencies(robot_a_lib
    rclcpp
    std_msgs
)
