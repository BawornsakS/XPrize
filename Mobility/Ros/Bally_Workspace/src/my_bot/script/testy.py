#!/usr/bin/env python

import time
# import rospy
# import tf
import serial
# from geometry_msgs.msg import Point, Pose, Quaternion, Twist, Vector3
# from sensor_msgs.msg import Imu
# from std_msgs.msg import String

ser = serial.Serial(port ='/dev/ttyACM0',baudrate = 1000000,timeout = 0.01)

# rospy.init_node('imu_publisher')
# imu_pub =rospy.Publisher('imu',Imu,queue_size=1)
# obj=Imu()
# obj.linear_acceleration.x =0.0
# obj.linear_acceleration.y =0.0
# obj.linear_acceleration.z =0.0
# obj.angular_velocity.x =0.0
# obj.angular_velocity.y =0.0
# obj.angular_velocity.z =0.0
# r= rospy.Rate(1.0)
ax = 0.0
ay = 0.0
az = 0.0
gx = 0.0
gy = 0.0
gz = 0.0

while(1):
    datain = str(ser.readline())
    print(datain)
    datain = datain.replace("b'","")
    datain = datain.replace("'","")
    datain = datain.replace("\\n","")
    if (datain == ""):
        continue
    elif (datain[0] == "#" and datain[-1] == "#"):
        datain = datain.replace("#","")
        datain = datain.split(",")
        ax = float(datain[0])
        ay = float(datain[1])
        az = float(datain[2])
        gx = int(datain[3])
        gy = int(datain[4])
        gz = int(datain[5])

    elif (datain[0] == "|" and datain[-1] == "|"):
        datain = datain.replace("|","")
        datain = datain.split(",")
        v1 = int(datain[0])
        v2 = int(datain[1])
        v3 = int(datain[2])
        v4 = int(datain[3])
    display_data = "gogo %s" % str(ser.readline())
    
        
    # print(display_data)