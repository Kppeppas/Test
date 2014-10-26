#ifndef STREAMER_H
#define STREAMER_H
#include "ros/ros.h"
#include <string>
#include "std_msgs/Int16.h"
#include "cstdlib"


class Streamer
{
ros::Publisher rand_pub;
std_msgs::Int16 randnum;
ros::Rate pub_rate;
ros::NodeHandle n;
public:
Streamer();
Streamer(std::string topicName, ros::Rate pRate,ros::NodeHandle &node);
void publishInTopic();

};

#endif
