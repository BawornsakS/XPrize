#!/usr/bin/env python
import rospy
from math import pi, cos, sin

#import ros msgs
from geometry_msgs.msg import Twist
from sensor_msgs.msg import JointState
from std_msgs.msg import Float64

primitive_base_x_pub = rospy.Publisher('/kumara/base_x_velocity_controller/command', Float64, queue_size=10)
primitive_base_y_pub = rospy.Publisher('/kumara/base_y_velocity_controller/command', Float64, queue_size=10)
primitive_base_z_pub = rospy.Publisher('/kumara/base_z_velocity_controller/command', Float64, queue_size=10)

rospy.init_node('base_parser')

theta_feedback = 0

def polar_to_cartesian(r, th):
    y = r*sin(th)
    x = r*cos(th)
    return x, y

def get_theta(state):
    global theta_feedback
    idx = state.name.index('base_z_axis_joint')
    theta_feedback = state.position[idx]


def base_velocity_callback(vel):
    global theta_feedback
    xX,xY = polar_to_cartesian(vel.linear.x, theta_feedback)
    yX,yY = polar_to_cartesian(vel.linear.y, theta_feedback+(pi/2))
    primitive_base_x_pub.publish(xX+yX)
    primitive_base_y_pub.publish(xY+yY)
    primitive_base_z_pub.publish(vel.angular.z)
    

if __name__ == '__main__':
    try:
        rospy.Subscriber('kumara/joint_states', JointState, get_theta)
        rospy.Subscriber('kumara/base/cmd_vel', Twist, base_velocity_callback)
        rospy.spin()
    except rospy.ROSInterruptException:
        pass