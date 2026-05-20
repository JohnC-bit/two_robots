#include "RobotA.h"

using namespace std::chrono_literals;

RobotA::RobotA()
: Node("robot_a"), count_(0)
{
    publisher_ = this->create_publisher<std_msgs::msg::String>("a", 10);// publish on topic a, and the length of QoS is 10
    timer_ = this->create_wall_timer( 500ms, std::bind(&RobotA::timer_callback, this));//publish one time every 500ms

    RCLCPP_INFO(this->get_logger(), "RobotA started, publishing on topic 'a'");
}

void RobotA::timer_callback()
{
    auto message = std_msgs::msg::String();
    message.data = "Hello from RobotA #" + std::to_string(count_++);

    RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
    publisher_->publish(message);
}
