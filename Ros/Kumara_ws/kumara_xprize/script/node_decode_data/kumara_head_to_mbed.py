#!/usr/bin/env python

import rospy
from std_msgs.msg import Int16MultiArray 
from geometry_msgs.msg import PoseStamped
import numpy as np
from math import sin, cos, pi, sqrt, atan2, degrees

last_data = Int16MultiArray()
	 # list frame [Qz   Qy    Qz  Qw  Pose.x]
last_data.data.extend([0, 0, 0, 1, 0.0])
started = False

pub = rospy.Publisher('/kumara/head/control', Int16MultiArray, queue_size=1000) 


def pose_callback(pose_data):
    global started, last_data, pub
    last_data.data  =  [int(pose_data.pose.orientation.x*1000), 
			int(pose_data.pose.orientation.y*1000), 
			int(pose_data.pose.orientation.z*1000), 
			int(pose_data.pose.orientation.w*1000), 
			int(pose_data.pose.position.x)]

    if (not started):
        started = True

def timer_callback(event):
    global started, pub, last_data
    if (started):
    	pub.publish(last_data)
    


def listener():
    rospy.init_node('mbed_to_headpose_node', anonymous=False)
    rospy.Subscriber('/kumara/head/pose', PoseStamped, pose_callback)
    timer = rospy.Timer(rospy.Duration(0.015), timer_callback)
    rospy.spin()    
    timer.shutdown()

if __name__ == '__main__':
    print "Running"
    listener()
