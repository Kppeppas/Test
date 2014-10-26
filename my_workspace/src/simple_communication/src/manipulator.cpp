#include "simple_communication/manipulator.h"

Manipulator::Manipulator() {}

Manipulator::Manipulator(std::string topicName,ros::NodeHandle &node)
{
	n=node;
	topic=topicName;
}


void Manipulator::subscribe()
{
	rand_sub=n.subscribe(topic,1,&Manipulator::receiveNumber,this);
}

void Manipulator::receiveNumber(const std_msgs::Int16::ConstPtr& msg)
{
	randnum.data=msg->data;
	manipulate();
	printInConsole();
}

void Manipulator::manipulate()
{	
	randnum.data=randnum.data*randnum.data;
}

void Manipulator::printInConsole()
{
	ROS_INFO("Tetragwno arithmoy %d",randnum.data);
}
