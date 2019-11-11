import time
import serial

ser = serial.Serial(
port ='/dev/ttyACM0',
baudrate = 9600,
timeout = 0.01
)
odometry = ser.readline()
print(odometry)
