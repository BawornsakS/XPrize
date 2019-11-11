#!/usr/bin/env python

import time
import rospy
import tf
import serial
from geometry_msgs.msg import Point, Pose, Quaternion, Twist, Vector3
from sensor_msgs.msg import Imu
from std_msgs.msg import String

ser = serial.Serial(
port ='ttyACM0',
baudrate = 250000,
timeout = 0.01
)
odometry = ser.readline()




#imu_data="2.4,5.2,3.0,2.1,1.1,1.2,1.3,1.4,2.5,2.6,2.7,2.8"
#imu_param=imu_data.split(",")
for i in range(len(imu_param)):
    imu_param[i] = float(imu_param[i])
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

    obj.linear_acceleration.x =imu_param[0]
    obj.linear_acceleration.y =imu_param[1]
    obj.linear_acceleration.z =imu_param[2]

    obj.angular_velocity.x =imu_param[3]
    obj.angular_velocity.y =imu_param[4]
    obj.angular_velocity.z =imu_param[5]

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
    r.sleep()
