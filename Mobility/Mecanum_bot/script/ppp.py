#!/usr/bin/env python

import math
from math import sin, cos, pi
import rospy
import tf
from nav_msgs.msg import Odometry
from sensor_msgs.msg import Imu
from geometry_msgs.msg import Point, Pose, Quaternion, Twist, Vector3

class odometry_publisher(object):

    def __init__(self):
        self.odom_pub = rospy.Publisher("odom", Odometry, queue_size=50)
        self.odom_broadcaster = tf.TransformBroadcaster()
        self.map_broadcaster = tf.TransformBroadcaster()
        self.sub = rospy.Subscriber("/camera/odom/sample", Odometry, self.callback, queue_size=10)
        self.x = 0.0
        self.y = 0.0
        self.th = 0.0
        self.w = 0.0
        self.vx = 0.0
        self.vy = 0.0
        self.vth = 0.0
        self.qx = 0.0
        self.qy = 0.0
        self.current_time = rospy.Time.now()
        self.last_time = rospy.Time.now()

        self.r = rospy.Rate(100.0)


    def callback(self,msg):
        self.x = msg.pose.pose.position.x
        self.y = msg.pose.pose.position.y
        self.z = msg.pose.pose.position.z
        self.vx = msg.twist.twist.linear.x
        self.vy = msg.twist.twist.linear.y
        self.vth = msg.twist.twist.angular.z
        self.th = msg.pose.pose.orientation.z
        self.w = msg.pose.pose.orientation.w
        self.qx = msg.pose.pose.orientation.x
        self.qy = msg.pose.pose.orientation.y

    def publish(self):
        while not rospy.is_shutdown():
            self.current_time = rospy.Time.now()

            # first, we'll publish the transform over tf
            self.odom_broadcaster.sendTransform(
                (self.x, self.y, 0.),
                (self.qx,self.qy,self.th,self.w),
                self.current_time,
                "base_footprint",
                "odom"
            )

            # next, we'll publish the odometry message over ROS
            odom = Odometry()
            odom.header.stamp = self.current_time
            odom.header.frame_id = "odom"

            # set the position
            odom.pose.pose = Pose(Point(self.x, self.y, 0.), Quaternion(self.qx,self.qy,self.th,self.w))

            # set the velocity
            odom.child_frame_id = "base_footprint"
            odom.twist.twist = Twist(Vector3(self.vx, self.vy, 0), Vector3(0, 0, self.vth))

            # publish the message
            self.odom_pub.publish(odom)
            self.r.sleep()

if __name__ == '__main__':

    rospy.init_node('odometry_publisher')
    object__ = odometry_publisher()
    object__.publish()
    rospy.spin()