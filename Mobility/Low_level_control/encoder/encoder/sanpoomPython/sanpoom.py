import serial
import matplotlib.pyplot as plt
import matplotlib.animation as animation
from matplotlib import style

ser = serial.Serial('/dev/tty.usbmodem14103', 1000000,timeout = 1)
data = ""
while(1):

    data = ser.readline()
    print(data)