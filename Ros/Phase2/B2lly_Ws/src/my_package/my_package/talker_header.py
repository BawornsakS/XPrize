
import sys

import rospy
from rospy_tutorials.msg import HeaderString

NAME = 'talker_header'

def talker_header():
    pub = rospy.Publisher("chatter_header", HeaderString, queue_size=10)

    rospy.init_node(NAME) #blocks until registered with master
    count = 0
    while not rospy.is_shutdown():
        str = 'hello world %s'%count
        print (str)
        # If None is used as the header value, rospy will automatically
        # fill it in.
        pub.publish(HeaderString(None, str))
        count += 1
        rospy.sleep(0.1)
    
if __name__ == '__main__':
    talker_header()

