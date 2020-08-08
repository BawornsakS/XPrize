#!/usr/bin/env python
import rospy
from math import pi, cos, sin
from tf.transformations import euler_from_quaternion

#import ros msgs
from geometry_msgs.msg import PoseStamped
from std_msgs.msg import Float64

primitive_head_rx_pub = rospy.Publisher('kumara/neck_rx_position_controller/command', Float64, queue_size=10)
primitive_head_ry_pub = rospy.Publisher('kumara/neck_ry_position_controller/command', Float64, queue_size=10)
primitive_head_rz_pub = rospy.Publisher('kumara/neck_rz_position_controller/command', Float64, queue_size=10)
primitive_head_x_pub = rospy.Publisher('kumara/neck_x_position_controller/command', Float64, queue_size=10)
primitive_head_z_pub = rospy.Publisher('kumara/neck_z_position_controller/command', Float64, queue_size=10)


rospy.init_node('head_parser')

def head_position_callback(pose):
    q = pose.pose.orientation
    rpy = euler_from_quaternion([q.x, q.y, q.z, q.w])
    primitive_head_rx_pub.publish(rpy[0])
    primitive_head_ry_pub.publish(rpy[1])
    primitive_head_rz_pub.publish(rpy[2])
    primitive_head_x_pub.publish(pose.pose.position.x)
    primitive_head_z_pub.publish(pose.pose.position.z)
    

if __name__ == '__main__':
    try:
        rospy.Subscriber('kumara/head/pose', PoseStamped, head_position_callback)
        rospy.spin()
    except rospy.ROSInterruptException:
        pass