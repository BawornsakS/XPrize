#!/usr/bin/env python

import rospy
from std_msgs.msg import Float32MultiArray , MultiArrayLayout , MultiArrayDimension
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Pose, Twist
import numpy as np
from math import sin, cos, pi, sqrt, atan2, degrees
pop = MultiArrayLayout

last_data = Float32MultiArray()
vel_pose_data = Float32MultiArray()
vel_pose_data.data.append(0.0)
vel_pose_data.data.append(0.0)
vel_pose_data.data.append(0.0)
last_data.data.append(0.0)
last_data.data.append(0.0)
last_data.data.append(0.0)
started = False
Yaw = 0
Vx  = 0
Vy  = 0
Vz = 0
pub = rospy.Publisher('kumara/base/control', Float32MultiArray, queue_size=1000) 

def yaw_for_robot(x,y,z,w):
    R11 = 1-(2*((y*y)+(z*z)))
    R31 = 2*((x*z)-(w*y))
    C2 = sqrt((R11*R11)+(R31*R31))
    thata = degrees(atan2((R31/-C2),(R11/C2)))
    return thata+180

#def pose_callback(pose_data):
    #global started, last_data, Yaw
    #Yaw = yaw_for_robot(pose_data.orientation.x, pose_data.orientation.y, pose_data.orientation.z, pose_data.orientation.w)
    #print(Yaw)
    #print(pose_data.orientation.x, pose_data.orientation.y, pose_data.orientation.z, pose_data.orientation.w)
    #if (not started):
        #started = True

def twist_callback(twist_data):
    global started, last_data, vel_pose_data ,Vx ,Vy, Vz
    Vx = twist_data.linear.x
    Vy = twist_data.linear.y
    Vz = twist_data.linear.z
    if (not started):
        started = True

def timer_callback(event):
    global started, pub, last_data, vel_pose_data , Yaw , Vx , Vy
    vel_pose_data.data = [Vx,Vy,Vz]
    last_data = vel_pose_data
    if (started):
        pub.publish(last_data)

        #print ("Last message published")

def listener():
    rospy.init_node('basepose_to_mbed', anonymous=False)
    #rospy.Subscriber('kumara/base/pose', Pose, pose_callback)
    rospy.Subscriber('kumara/base/cmd_vel', Twist, twist_callback)
    timer = rospy.Timer(rospy.Duration(0.1), timer_callback) #Hz change 0.1 na 0.1 = 10hz
    rospy.spin()    
    timer.shutdown()

if __name__ == '__main__':
    print "Running"
    listener()
