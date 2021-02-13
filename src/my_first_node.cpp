#include <ros/ros.h>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "my_first_cpp_node");
    ros::NodeHandle nh;

    ROS_INFO("Nodehas been started");
    ros::Duration(1.0).sleep();

    ROS_INFO("Exit");
}