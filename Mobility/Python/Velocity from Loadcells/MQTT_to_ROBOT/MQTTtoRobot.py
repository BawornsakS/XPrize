#!/usr/bin/env python3
import paho.mqtt.client as mqtt
import serial

host = "192.168.99.41"
port = 1883

def yaw_for_robot(x,y,z,w):
    R11 = 1-(2*((y*y)+(z*z)))
    R31 = 2*((x*z)-(w*y))
    C2 = sqrt((R11*R11)+(R31*R31))
    thata = degrees(atan2((R31/-C2),(R11/C2)))
    return thata+180

ser = serial.Serial(
port ='/dev/ttyUSB0',
baudrate = 115200,
timeout = 0.01
)


def on_connect(self, client, userdata, rc):
    print("MQTT Connected.")
    self.subscribe("FIBO/MQTT")

def on_message(client, userdata,msg):
	
	ser.write(str(theta).encode())

client = mqtt.Client()
client.on_connect = on_connect
client.on_message = on_message
client.connect(host)
client.loop_forever(timeout=5)
