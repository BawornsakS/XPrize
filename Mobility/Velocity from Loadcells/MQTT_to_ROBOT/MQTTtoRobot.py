#!/usr/bin/env python3
import paho.mqtt.client as mqtt
import serial

host = "broker.mqttdashboard.com"
port = 8000

ser = serial.Serial(
port ='/dev/ttyUSB0',
baudrate = 115200,
timeout = 0.01
)

w = 0;

def on_connect(self, client, userdata, rc):
    print("MQTT Connected.")
    self.subscribe("FIBO/MQTT")

def on_message(client, userdata,msg):
	#cmd = msg.payload.decode("utf-8", "strict")
	cmd = msg.payload
	#cmd = str(cmd.replace("b","").replace("'","").replace("\n",""))
	#print(cmd) 
	
	arr = list(cmd)
	arr.insert(6,w)
	arr.insert(7,w)
	new_checksum = (arr[8]+w+w)%256
	arr[8] = new_checksum;
	#Vx = ((arr[2]%16)<<8)& 0b    
	#Vy = arr[] 
	cmd = bytes(arr)
	if len(cmd)>5:
		ser.write(cmd)
		#lukkid ="+100+000+000"+"\n"
		#ser.write(bytes(lukkid,"utf-8"))
		print(cmd)



client = mqtt.Client()
client.on_connect = on_connect
client.on_message = on_message
client.connect(host)
client.loop_forever()
