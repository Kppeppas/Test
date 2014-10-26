#include "simple_communication/streamer.h"

int main(int argc,char **argv)
{
ros::init(argc,argv,"streamer");
ros::NodeHandle node;
ros::Rate tempR(1.0);
Streamer streamObj("/task1/numbers",tempR, node);
streamObj.publishInTopic();
return 0;
}
