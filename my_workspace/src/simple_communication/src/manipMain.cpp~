#include "simple_communication/manipulator.h"


int main(int argc,char **argv)
{
ros::init(argc,argv,"manipulator");
ros::NodeHandle node;
Manipulator tempManip("/task1/numbers",node);
tempManip.subscribe();	
ros::spin();
return 0;
}
