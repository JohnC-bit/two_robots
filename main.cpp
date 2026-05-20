#include "rclcpp/rclcpp.hpp"
#include "RobotA.h"
#include "RobotB.h"

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);

    auto robot_a = std::make_shared<RobotA>();
    auto robot_b = std::make_shared<RobotB>();

    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(robot_a);
    executor.add_node(robot_b);
    executor.spin();

    rclcpp::shutdown();
    return 0;
}