add_library(robot_b_lib
    src/RobotB.cpp
)

target_include_directories(robot_b_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

ament_target_dependencies(robot_b_lib
    rclcpp
    std_msgs
)
