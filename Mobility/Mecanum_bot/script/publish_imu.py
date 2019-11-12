#!/usr/bin/env python

import time
import rospy
import tf
import serial
from geometry_msgs.msg import Point, Pose, Quaternion, Twist, Vector3
from sensor_msgs.msg import Imu
from std_msgs.msg import String

ser = serial.Serial(port ='/dev/ttyACM0',baudrate = 1000000,timeout = 0.01)

rospy.init_node('imu_publisher')
imu_pub =rospy.Publisher('imu',Imu,queue_size=50)
obj=Imu()
# obj.linear_acceleration.x =0.0
# obj.linear_acceleration.y =0.0
# obj.linear_acceleration.z =0.0
# obj.angular_velocity.x =0.0
# obj.angular_velocity.y =0.0
# obj.angular_velocity.z =0.0
r= rospy.Rate(50)
# ax = 0.0
# ay = 0.0
# az = 0.0
# gx = 0.0
# gy = 0.0
# gz = 0.0
while not rospy.is_shutdown():
    balloon = "fuck"
    current_time = rospy.Time.now()
    datain = str(ser.readline())
    
    # datain = datain.replace("b'","")
    
    # datain = datain.replace("'","")
    
    # datain = datain.replace("\\n","")
    display_data = datain
    try:
        if (datain == ""):
            continue
        if ("#" in datain):
            balloon = "#"
            datain = datain.replace("#","")
            datain = datain.split(",")
            obj.linear_acceleration.x = float(datain[0])
            obj.linear_acceleration.y = float(datain[1])
            obj.linear_acceleration.z = float(datain[2])
            obj.angular_velocity.x = int(datain[3])
            obj.angular_velocity.y = int(datain[4])
            obj.angular_velocity.z = int(datain[5])

        if (datain[0] == "|" and datain[-1] == "|"):
            balloon = "|"
            datain = datain.replace("|","")
            datain = datain.split(",")
            v1 = int(datain[0])
            v2 = int(datain[1])
            v3 = int(datain[2])
            v4 = int(datain[3])
    except:
        balloon ="wannacry"
    # display_data = balloon
    rospy.loginfo(display_data)

    obj.header.stamp = current_time
    imu_quat = tf.transformations.quaternion_from_euler(0, 0, 0)
    obj.header.frame_id = 'base_link'
    imu_pub.publish(obj)
    r.sleep()