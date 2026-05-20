#include "RobotB.h"

RobotB::RobotB()
: Node("robot_b")
{
    subscription_ = this->create_subscription<std_msgs::msg::String>(
        "a", 10,
        std::bind(&RobotB::topic_callback, this, std::placeholders::_1));//subscribe on topic a, and the length of QoS is 10

    RCLCPP_INFO(this->get_logger(), "RobotB started, subscribing to topic 'a'");
}

void RobotB::topic_callback(const std_msgs::msg::String::SharedPtr msg)
{
    RCLCPP_INFO(this->get_logger(), "RobotB received: '%s'", msg->data.c_str());
}
