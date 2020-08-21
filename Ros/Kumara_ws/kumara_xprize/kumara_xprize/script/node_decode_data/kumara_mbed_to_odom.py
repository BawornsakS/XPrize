#!/usr/bin/env python

import rospy
from std_msgs.msg import Float32MultiArray
from nav_msgs.msg import Odometry
import numpy as np
from math import sin, cos, pi

last_data = Odometry()
started = False
pub = rospy.Publisher('/kumara/odom', Odometry, queue_size=1000) 
#last_data.pose.pose.position.z      =       0.0
#last_data.pose.pose.orientation.x   =       0.0
#last_data.pose.pose.orientation.y   =       0.0
def etoq(yaw):
	yaw =(yaw*pi)/180.00   #convert to rad
	w = cos(yaw/2)
	z = sin(yaw/2)
	return [w,z]

def callback(data):
    global started, last_data
    last_data.header.frame_id = "odom"
    last_data.child_frame_id = "base_footprint"
    last_data.pose.pose.position.x      =       data.data[0]
    last_data.pose.pose.position.y      =       data.data[1]
    last_data.pose.pose.orientation.w   =       etoq(data.data[2])[0]
    last_data.pose.pose.orientation.z   =       etoq(data.data[2])[1]
    
    if (not started):
        started = True

def timer_callback(event):
    global started, pub, last_data
    if (started):
        pub.publish(last_data)
        

def listener():
    rospy.init_node('mbed_to_odom', anonymous=False)
    rospy.Subscriber('/kumara/feedback/base/pose', Float32MultiArray, callback)
    timer = rospy.Timer(rospy.Duration(0.05), timer_callback)
    rospy.spin()    
    timer.shutdown()

if __name__ == '__main__':
    print "Running"
    listener()
