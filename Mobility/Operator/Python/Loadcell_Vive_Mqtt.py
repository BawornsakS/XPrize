import serial
import paho.mqtt.client as mqtt
from math import atan2 , sqrt , degrees

host = "192.168.99.35"
port = 1883
ser = serial.Serial(port ='COM3',baudrate = 1000000,timeout = 0.01 )
datain = []
def addTheta(oldByte,theta):
    oldCheckSum = oldByte.pop()
    theta2 = round(abs(theta*10))
    theta_hb = theta2>>8
    theta_hb |= 1<<7
    theta_lb = theta2%256
    oldByte.extend([theta_hb,theta_lb])
    newChecksum = (oldCheckSum + theta_lb +theta_hb)%256
    oldByte.append(newChecksum)
    return bytes(oldByte)

def yaw_for_robot(x,y,z,w):
    R11 = 1-(2*((y*y)+(z*z)))
    R31 = 2*((x*z)-(w*y))
    C2 = sqrt((R11*R11)+(R31*R31))
    thata = degrees(atan2((R31/-C2),(R11/C2)))
    return thata+180

def on_connect(self, client, userdata, rc):
    print("MQTT Connected.")
    self.subscribe("Balloon")
    
def on_message(client, userdata,msg):
    # q = msg.payload.decode("utf-8", "strict") 
    # q = str(q).split(",")
    #theta = yaw_for_robot(float(q[0]),float(q[1]),float(q[2]),float(q[3]))
    if(ser.in_waiting>0):
        datain = list(ser.read(4))

    if datain != []:
        dataout = addTheta(datain,180)
        print(dataout)
        client.publish("lukkid", dataout)

client = mqtt.Client()
client.on_connect = on_connect
client.on_message = on_message
client.connect(host)
client.loop_forever(timeout=5)
