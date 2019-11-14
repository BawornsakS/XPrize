#!/usr/bin/env python

import time
import rospy
import tf
import serial
from geometry_msgs.msg import Point, Pose, Quaternion, Twist, Vector3
from sensor_msgs.msg import Imu
from std_msgs.msg import String

#ser = serial.Serial(port ='/dev/ttyACM0',baudrate = 1000000,timeout = 0.01)

rospy.init_node('imu_publisher')
imu_pub =rospy.Publisher('imu',Imu,queue_size=50)

def imu_cb(data):
    obj=Imu()
    r= rospy.Rate(20)
    
    current_time = rospy.Time.now()
    datain = data.data
    display_data = datain
    try:
        if "#" in datain:
            datain = datain.replace("#","")
            datain = datain.split(",")
            rospy.loginfo(datain)
            obj.linear_acceleration.x = float(datain[0])
            obj.linear_acceleration.y = float(datain[1])
            obj.linear_acceleration.z = float(datain[2])
            obj.angular_velocity.x = int(datain[3])
            obj.angular_velocity.y = int(datain[4])
            obj.angular_velocity.z = int(datain[5])
            imu_pub.publish(obj)
    except:
        balloon ="wannacry"
    # display_data = balloon
    # rospy.loginfo(display_data)

    obj.header.stamp = current_time
    # imu_quat = tf.transformations.quaternion_from_euler(0, 0, 0)
    obj.header.frame_id = 'base_link'
    r.sleep()

if __name__ == '__main__':
    try:
        rospy.Subscriber('sub_ser', String, imu_cb)
        rospy.spin()
    except rospy.ROSInterruptException:
        pass