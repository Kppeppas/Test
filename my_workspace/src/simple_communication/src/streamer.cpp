#include "simple_communication/streamer.h"


Streamer::Streamer():pub_rate(0) {}


Streamer::Streamer(std::string topicName, ros::Rate pRate,ros::NodeHandle &node):pub_rate(pRate)
{
n=node;
rand_pub=n.advertise<std_msgs::Int16>(topicName, 10);
}

void Streamer::publishInTopic()
{
while(ros::ok())
{
randnum.data=rand()%181;
rand_pub.publish(randnum);
pub_rate.sleep();
}
}
