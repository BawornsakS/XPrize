#!/usr/bin/env python
import rospy
import tf.transformations
from geometry_msgs.msg import Twist

def callback(msg):
    rospy.loginfo("Karn heard a /cmd_vel message!")
    rospy.loginfo("Linear Components: [%f, %f, %f]" % (msg.linear.x, msg.linear.y, msg.linear.z))
    rospy.loginfo("Angular Components:[%f, %f, %f]" % (msg.angular.x, msg.angular.y, msg.angular.z))
    Transform = ("%f%f%f" % (msg.linear.x,msg.linear.y,msg.angular.z))
    
def listener():
    rospy.init_node('cmd_vel_listener')
    rospy.Subscriber("/cmd_vel", Twist, callback)
    rospy.spin()

if __name__ == '__main__':
    listener()
