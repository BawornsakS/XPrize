#!/usr/bin/env python
import serial
import rospy
import tf.transformations
from geometry_msgs.msg import Twist

ser = serial.Serial(
port ='/dev/ttyUSB0',
baudrate = 250000,
timeout = 0.01
)

def callback(msg):
    vx = int(msg.linear.x)
    vy = int(msg.linear.y)
    w = int(msg.angular.z)
    rob_vx = "+"
    rob_vy = "+"
    rob_w = "+"
    if vx < 0:
        rob_vx = "-"
    if vy < 0:
        rob_vy = "-"
    if w < 0:
        rob_w = "-"

    vx = str(vx).replace("-","")
    vy = str(vy).replace("-","")
    w = str(w).replace("-","")
# FIX bug
    for i in range(2):
        if len(vx) != 3:
            vx = "0" + vx
        if len(vy) != 3:
            vy = "0" + vy
        if len(w) != 3:
            w = "0" + w
        if len(vx) == 3 and len(vy) == 3 and len(w) == 3:
            break

    vx = rob_vx+vx
    vy = rob_vy+vy
    w = rob_w+w
    data = b"" + vx + vy + w + "\n"
    rospy.loginfo(data) 
    rospy.loginfo("Linear Components: [%f, %f, %f]" % (msg.linear.x, msg.linear.y, msg.linear.z))
    rospy.loginfo("Angular Components:[%f, %f, %f]" % (msg.angular.x, msg.angular.y, msg.angular.z))
    #Transform = ("%f%f%f" % (msg.linear.x,msg.linear.y,msg.angular.z))

    ser.write(data)
def listener():
    rospy.init_node('cmd_vel_listener')
    rospy.Subscriber("/cmd_vel", Twist, callback)
    rospy.spin()

if __name__ == '__main__':
    listener()
  
    
    
