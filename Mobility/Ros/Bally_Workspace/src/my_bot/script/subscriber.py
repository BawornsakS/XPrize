#!/usr/bin/env python
import rospy
from std_msgs.msg import String
import tf
from geometry_msgs.msg import Point, Pose, Quaternion, Twist, Vector3
from sensor_msgs.msg import Imu

def callback(data):
    karn = data.data
    print ("Subscriber recieved a msg: ", karn)
    # print(karn)

def cheek():
    rospy.init_node('subscriber', anonymous=True)
    subscriber = rospy.Subscriber('imu',Imu,callback)
    rospy.spin()
if __name__ == '__main__':
    cheek()