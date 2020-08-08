#include "mbed.h"
#include <ros.h> // for every ros mbed program
#include <geometry_msgs/Twist.h> // header files of each messages

ros :: NodeHandle nh; 
// declare a node for allows our program to create publishers and subscribers
//geometry_msgs::Twist tw_msg;
double tw ;
float vx,vy,wz;

void twistCb(const geometry_msgs::float64 &msg){
    //do something
    //tw = msg.data;
    vx = msg.linear.x;
    vy = msg.linear.y;
    wz = msg.angular.z;
}

ros::Subscriber<geometry_msgs/Twist> sub_T("kumara/base/cmd_vel", &twistCb);

int main() {
    nh.initNode();
    nh.subscribe(sub_T);

    while(1){
        nh.spinOnce();
        printf("%f",vx);
        printf("%f",vy);
        printf("%f",wz);
    }
}