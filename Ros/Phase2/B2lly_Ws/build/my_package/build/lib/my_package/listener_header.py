
import sys 

import rospy
from rospy_tutorials.msg import HeaderString

NAME = 'listener_header'

def callback(data):
    chatter = data.data
    header = data.header
    timestamp = header.stamp.to_sec()
    print (rospy.get_caller_id(), header.seq, "I just heard that %s at %12f"%(chatter, timestamp))
    
def listener_header():
    rospy.Subscriber("chatter_header", HeaderString, callback)
    rospy.init_node(NAME, anonymous=True)
    rospy.spin()
        
if __name__ == '__main__':
    try:
        listener_header()
    except KeyboardInterrupt as e:
        pass
    print ("exiting")
