#!/usr/bin/env python
import time
import rospy
import serial
from std_msgs.msg import String

ser = serial.Serial(port ='/dev/ttyACM0',baudrate = 1000000,timeout = 0.01)

def subscribe_ser():
    rospy.init_node('sub_serial')
    sub_ser = rospy.Publisher('sub_ser', String, queue_size= 50)
   
    while not rospy.is_shutdown():
        datain = str(ser.readline())
        rospy.loginfo(datain)
        if datain != "":
            datain = datain.replace("\n","")
            sub_data = "%s" % datain
            sub_ser.publish(sub_data)
            

if __name__ == '__main__':
    try:
        subscribe_ser() # receive data by Serial 
    except rospy.ROSInterruptException:
        pass