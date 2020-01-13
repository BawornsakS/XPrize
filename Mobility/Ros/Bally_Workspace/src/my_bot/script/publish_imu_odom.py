#!/usr/bin/env python

import math
from math import sin, cos, pi

import rospy
import tf
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Point, Pose, Quaternion, Twist, Vector3
#IMU
import time
import serial
from sensor_msgs.msg import Imu

#test
imu_data="2.4,5.2,3.0,2.1,1.1,1.2,1.3,1.4,2.5,2.6,2.7,2.8"
imu_param=imu_data.split(",")
for i in range(len(imu_param)):
    imu_param[i] = float(imu_param[i])



rospy.init_node('odometry_publisher')

odom_pub = rospy.Publisher("odom", Odometry, queue_size=50)
odom_broadcaster = tf.TransformBroadcaster()

x = 0.0
y = 0.0
th = 0.0

vx = 5.0
vy = -0.0
vth = 0.0

wlf =0.0
wlb =0.0
wrf =0.0
wrb =0.0

#setIMU
rospy.init_node('imu_publisher')
imu_pub =rospy.Publisher('imu',Imu,queue_size=1)

obj=Imu()

obj.linear_acceleration.x =0.0
obj.linear_acceleration.y =0.0
obj.linear_acceleration.z =0.0
obj.angular_velocity.x =0.0
obj.angular_velocity.y =0.0
obj.angular_velocity.z =0.0
#/IMU


current_time = rospy.Time.now()
last_time = rospy.Time.now()

r = rospy.Rate(1.0)
while not rospy.is_shutdown():
    current_time = rospy.Time.now()
    
    # compute odometry in a typical way given the velocities of the robot
    dt = (current_time - last_time).to_sec()
    delta_x = (vx * cos(th) - vy * sin(th)) * dt
    delta_y = (vx * sin(th) + vy * cos(th)) * dt
    delta_th = vth * dt

    x += delta_x
    y += delta_y
    th += delta_th

    # since all odometry is 6DOF we'll need a quaternion created from yaw
    odom_quat = tf.transformations.quaternion_from_euler(0, 0, th)

    # first, we'll publish the transform over tf
    odom_broadcaster.sendTransform(
        (x, y, 0.),
        odom_quat,
        current_time,
        "base_link",
        "odom"
    )

    # next, we'll publish the odometry message over ROS
    odom = Odometry()
    odom.header.stamp = current_time
    odom.header.frame_id = "odom"

    # set the position
    odom.pose.pose = Pose(Point(x, y, 0.), Quaternion(*odom_quat))

    # set the velocity
    odom.child_frame_id = "base_link"
    odom.twist.twist = Twist(Vector3(vx, vy, 0), Vector3(0, 0, vth))

    # publish the message
    odom_pub.publish(odom)

    last_time = current_time

    #IMU
    obj.linear_acceleration.x =imu_param[0]
    obj.linear_acceleration.y =imu_param[1]
    obj.linear_acceleration.z =imu_param[2]

    obj.angular_velocity.x =imu_param[3]
    obj.angular_velocity.y =imu_param[4]
    obj.angular_velocity.z =imu_param[5]

    obj.header.stamp = current_time

    imu_quat = tf.transformations.quaternion_from_euler(0, 0, 0)
    
    imu_pub.publish(obj)
    #/IMU

    r.sleep()