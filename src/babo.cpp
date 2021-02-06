#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "babo");
  ros::NodeHandle nh;
  int Count = 0;
  Count = 3;

  if(Count == 3)
  {
   std::cout << "nunnu" << Count << std::endl;
   std::cout << "nunnu" << Count << std::endl;
  }


}
