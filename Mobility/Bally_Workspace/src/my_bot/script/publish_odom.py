#!/usr/bin/env python

import math
from math import sin, cos, pi
import serial
import time
import rospy
import tf
from std_msgs.msg import String
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Point, Pose, Quaternion, Twist, Vector3

# ser = serial.Serial(port ='/dev/ttyACM0',baudrate = 1000000,timeout = 0.01)

rospy.init_node('odometry_publisher')
odom_pub = rospy.Publisher("odom", Odometry, queue_size=50)
odom_broadcaster = tf.TransformBroadcaster()

def odom_cb(data):
    odom = Odometry()
    
    x = 0.0
    y = 0.0
    th = 0.0

    vx = 0.0
    vy = -0.0
    vth = 0.0

    wlf =0.0
    wlb =0.0
    wrf =0.0
    wrb =0.0

    #current_time = rospy.Time.now()

    r = rospy.Rate(20)
    current_time = rospy.Time.now()
    # last_time = rospy.Time.now()
    datain = data.data
    # set data
    try:
        # if (datain[0] == "|" and datain[-1] == "|"):
        if "|" in datain:
            datain = datain.replace("|","")
            datain = datain.split(",")
            vx = int(datain[0])
            vy = int(datain[1])
            vth = int(datain[2])
            # odom.header.stamp = current_time
            # odom.header.frame_id = "odom"


            odom_quat = tf.transformations.quaternion_from_euler(0, 0, th)

            # first, we'll publish the transform over tf
            odom_broadcaster.sendTransform(
                (x, y, 0.),
                odom_quat,
                current_time,
                "base_link",
                "odom")
            # set the position
            odom.pose.pose = Pose(Point(x, y, 0.), Quaternion(*odom_quat))

            # set the velocity
            # odom.child_frame_id = "base_link"
            odom.twist.twist = Twist(Vector3(vx, vy, 0), Vector3(0, 0, vth))

            # publish the message
            odom_pub.publish(odom)
    except:
        balloon ="wannacry"


    odom.header.stamp = current_time
    odom.header.frame_id = "odom"
    odom.child_frame_id = "base_link"

    rospy.loginfo(datain)

    # compute odometry 
    # dt = (current_time - last_time).to_sec()
    # delta_x = (vx * cos(th) - vy * sin(th)) * dt
    # delta_y = (vx * sin(th) + vy * cos(th)) * dt
    # delta_th = vth * dt

    # x += delta_x
    # y += delta_y
    # th += delta_th

    # odom_quat = tf.transformations.quaternion_from_euler(0, 0, th)

    # # first, we'll publish the transform over tf
    # odom_broadcaster.sendTransform(
    #     (x, y, 0.),
    #     odom_quat,
    #     current_time,
    #     "base_link",
    #     "odom"
    # )
    #     "odom"
    # )

    # next, we'll publish the odometry message over ROS
    #odom = Odometry()
    # odom.header.stamp = current_time
    # odom.header.frame_id = "odom"

    # # set the position
    # odom.pose.pose = Pose(Point(x, y, 0.), Quaternion(*odom_quat))

    # # set the velocity
    # odom.child_frame_id = "base_link"
    # odom.twist.twist = Twist(Vector3(vx, vy, 0), Vector3(0, 0, vth))

    # # publish the message
    # odom_pub.publish(odom)

    # last_time = current_time
    r.sleep()

if __name__ == '__main__':
    try:
        rospy.Subscriber('sub_ser', String, odom_cb)
        rospy.spin()
    except rospy.ROSInterruptException:
        pass