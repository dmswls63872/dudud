#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "zara");
  ros::NodeHandle nh;

  ROS_INFO("Hello world!");
}
