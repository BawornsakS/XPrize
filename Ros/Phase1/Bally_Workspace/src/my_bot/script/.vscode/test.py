#!/usr/bin/env python

import time
import rospy
import tf
import serial
from geometry_msgs.msg import Point, Pose, Quaternion, Twist, Vector3
from sensor_msgs.msg import Imu
from std_msgs.msg import String


# imu_data="2.4,5.2,3.0,2.1,1.1,1.2,1.3,1.4,2.5,2.6,2.7,2.8"
# imu_param=imu_data.split(",")
# for i in range(len(imu_param)):
#     imu_param[i] = float(imu_param[i])
ser = serial.Serial(
port ='/dev/ttyACM0',
baudrate = 1000000,
timeout = 0.001
)


rospy.init_node('imu_publisher')
imu_pub =rospy.Publisher('imu',Imu,queue_size=1)
# imu_broadcaster = tf.TransformBroadcaster()

obj=Imu()

obj.linear_acceleration.x =0.0
obj.linear_acceleration.y =0.0
obj.linear_acceleration.z =0.0
obj.angular_velocity.x =0.0
obj.angular_velocity.y =0.0
obj.angular_velocity.z =0.0
# obj.imu_msg.linear_acceleration_y=0.0
# obj.imu_msg.linear_acceleration_z=0.0
r= rospy.Rate(1.0)
while not rospy.is_shutdown():
    current_time = rospy.Time.now()
    #obj.imu.read()
    datain = str(ser.readline())
    datain = datain.replace("b'","")
    datain = datain.replace("'","")
    datain = datain.replace("\\n","")
    if (datain == ""):
        continue
    if (datain[0] == "#" and datain[-1] == "#"):
        datain = datain.replace("#","")
        datain = datain.split(",")
        ax = float(datain[0])
        ay = float(datain[1])
        az = float(datain[2])
        gx = int(datain[3])
        gy = int(datain[4])
        gz = int(datain[5])
    if (datain[0] == "|" and datain[-1] == "|"):
        datain = datain.replace("|","")
        datain = datain.split(",")
        v1 = int(datain[0])
        v2 = int(datain[1])
        v3 = int(datain[2])
        v4 = int(datain[3])
    

    obj.linear_acceleration.x =1.0
    obj.linear_acceleration.y =1.0
    obj.linear_acceleration.z =1.0

    obj.angular_velocity.x =1.0
    obj.angular_velocity.y =1.0
    obj.angular_velocity.z =1.0

    obj.header.stamp = current_time
    # obj.header.frame_id = obj.frame_name
    imu_quat = tf.transformations.quaternion_from_euler(0, 0, 0)
    # obj.header.seq = obj.seq
    imu_pub.publish(obj)
    # obj.seq += 1

    # imu_broadcaster.sendTransform(
    #     (imu_param[0], imu_param[1], imu_param[2]),
    #     imu_quat,
    #     current_time,
    #     "imu"
    # )
