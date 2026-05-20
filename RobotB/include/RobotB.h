#ifndef ROBOT_B_H
#define ROBOT_B_H

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class RobotB : public rclcpp::Node
{
public:
    RobotB();

private:
    void topic_callback(const std_msgs::msg::String::SharedPtr msg);

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

#endif  // ROBOT_B_H
