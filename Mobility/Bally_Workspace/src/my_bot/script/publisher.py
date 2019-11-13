#!/usr/bin/env python
import rospy
from std_msgs.msg import String

def eye():
    publisher = rospy.Publisher('/say_hello', String, queue_size=1)
    rospy.init_node('publisherk', anonymous=True) # ***
    rate = rospy.Rate(3) # 3Hz
    while not rospy.is_shutdown():
        publisher.publish('Hey!')
        rate.sleep() # similar to time 
if __name__ == '__main__':
    try:
        eye()
    except rospy.ROSInterruptException:
        pass

