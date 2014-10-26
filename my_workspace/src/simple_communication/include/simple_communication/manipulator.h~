#ifndef MANIPULATOR_H
#define MANIPULATOR_H
#include "ros/ros.h"
#include <string>
#include "std_msgs/Int16.h"

class Manipulator
{
ros::Subscriber rand_sub;
std_msgs::Int16 randnum;
ros::NodeHandle n;
std::string topic;
public:
Manipulator();
Manipulator(std::string topicName,ros::NodeHandle &node);
void subscribe();
void receiveNumber(const std_msgs::Int16::ConstPtr& msg);
void manipulate();
void printInConsole();
};


#endif
