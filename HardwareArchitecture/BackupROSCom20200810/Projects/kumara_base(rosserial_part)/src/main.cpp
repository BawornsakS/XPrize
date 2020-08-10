// Include Files
#include "mbed.h"
#include "math.h"
// #include <stdio.h>
#include <ros.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Twist.h>
#include <nav_msgs/Odometry.h>
#define PI 3.14159265

double Vx,Vy,Vz,Theta,Qx,Qy,Qz,Qw,Px,Py,Pz;
ros::NodeHandle nh;
nav_msgs::Odometry kumara_feedback_odom;
void poseCb(const geometry_msgs::Pose& pose_msg)
{
  Qx = pose_msg.orientation.x;
  Qy = pose_msg.orientation.y;
  Qz = pose_msg.orientation.z;
  Qw = pose_msg.orientation.w;
  Px = pose_msg.position.x;
  Py = pose_msg.position.y;
  Pz = pose_msg.position.z;
}

void velCb(const geometry_msgs::Twist& twist_msg)
{
  Vx = twist_msg.linear.x;
  Vy = twist_msg.linear.y;
  Vz = twist_msg.angular.z;
}

ros::Subscriber<geometry_msgs::Pose> sub_base_pose("kumara/base/pose",&poseCb);
ros::Subscriber<geometry_msgs::Twist> sub_cmd_vel("kumara/base/cmd_vel",&velCb);
ros::Publisher odom("kumara/feedback/odom", &kumara_feedback_odom);



float kumara_theta(double w, double x ,double y ,double z)
{
  float R11 = 1-(2*((y*y)+(z*z)));
  float R31 = 2*((x*z)-(w*y));
  float C2 = sqrt((R11*R11)+(R31*R31));
  double thata = atan2((R31/-C2),(R11/C2));
  return thata;
}

double set_odom()
{
  return 0;
}

int main(int, const char * const [])
{
    nh.getHardware()->setBaud(300000);
    nh.initNode();
    nh.advertise(odom);
    nh.subscribe(sub_base_pose);
    nh.subscribe(sub_cmd_vel);
    kumara_feedback_odom.header.frame_id = "kumara_feedback_odom";
    while (1)
  {
    kumara_feedback_odom.header.stamp = nh.now();
    kumara_feedback_odom.pose.pose.position.x     = Px;
    kumara_feedback_odom.pose.pose.position.y     = Py;
    kumara_feedback_odom.pose.pose.position.z     = Pz;
    kumara_feedback_odom.pose.pose.orientation.w  = Qw;
    kumara_feedback_odom.pose.pose.orientation.x  = Qx;
    kumara_feedback_odom.pose.pose.orientation.y  = Qy;
    kumara_feedback_odom.pose.pose.orientation.z  = Qz;
    odom.publish(&kumara_feedback_odom);
    wait_ms(70);
    nh.spinOnce();
  }
return 0;
}
