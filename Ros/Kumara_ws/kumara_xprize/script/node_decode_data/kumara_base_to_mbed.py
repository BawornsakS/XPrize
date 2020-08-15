#!/usr/bin/env python

import rospy
from std_msgs.msg import Int16MultiArray , Float32
from geometry_msgs.msg import Pose, Twist
from math import sin, cos, pi, sqrt, atan2, degrees


last_data = Int16MultiArray()
last_data.data.extend([0, 0, 0])
started = False

pub = rospy.Publisher('kumara/base/control', Int16MultiArray, queue_size=1000) 

def twist_callback(twist_data):
    global started, last_data
    last_data.data[0] = twist_data.linear.x
    last_data.data[1] = twist_data.linear.y
    if (not started):
        started = True

def yaw_callback(yaw_data):
    global started, last_data
    last_data.data[2] = int(degrees(yaw_data.data))
    if (not started):
        started = True

def timer_callback(event):
    global started, pub, last_data
    if (started):
        pub.publish(last_data)
        print (last_data)

def listener():
    rospy.init_node('basepose_to_mbed', anonymous=False)
    rospy.Subscriber('/kumara/base/yaw', Float32, yaw_callback)
    rospy.Subscriber('/kumara/base/cmd_vel', Twist, twist_callback)
    timer = rospy.Timer(rospy.Duration(0.015), timer_callback) #Hz change 0.1 na 0.1 = 10hz
    rospy.spin()
    timer.shutdown()

if __name__ == '__main__':
    print "Running"
    listener()
