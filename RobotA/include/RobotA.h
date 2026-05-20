#ifndef ROBOT_A_H
#define ROBOT_A_H

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"


class RobotA : public rclcpp::Node
{
public:
    RobotA();

private:
    void timer_callback();

    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    size_t count_;
};

#endif  
