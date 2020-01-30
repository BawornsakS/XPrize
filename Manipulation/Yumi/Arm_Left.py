import socket
import sys
import time
import paho.mqtt.client as mqtt
import threading

sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_address = ('192.168.125.1', 5000)
print('connecting to {} port {}'.format(*server_address))
sock.connect(server_address)

host = "192.168.99.40"
port = 1883
Mode = "1"

X_Used   = -21
X_Now    = -21
X_Last   = -21
Y_Used   = 263
Y_Now    = 263
Y_Last   = 263
Z_Used   = 236
Z_Now    = 236
Z_Last   = 236
qW = 0.5218
qX = -0.49017
qY = 0.48419
qZ = -0.50301
Set_Velocity = "8 600 600 #".encode()
Set_Start = "2 0 -130 30 0 40 0 135 #".encode()
Send = sock.sendall(Set_Velocity)
received = sock.recv(20)
print('received {!r}'.format(received))
Send = sock.sendall(Set_Start)
received = sock.recv(20)
print('received {!r}'.format(received))

def on_connect(self, client, userdata, rc):
    print("MQTT Connected.")
    self.subscribe("/operator/hand/left/transform")
    
def on_message(client, userdata,msg):
    global X_Now,Y_Now,Z_Now,X_Used,Y_Used,Z_Used
    data_Q = msg.payload.decode("utf-8", "strict")
    received_MQTT = str(data_Q).split(",")
    X_Now = int(float(received_MQTT[2]) * 1000)
    Y_Now = int(float(received_MQTT[0]) * -1000)
    Z_Now = int(float(received_MQTT[1]) * 500) + 100

    if int(X_Now) in range(-200,550): #-100,550
        X_Used = X_Now
    if int(Y_Now) in range(100,450): #200,550
        Y_Used = Y_Now
    if int(Z_Now) in range(100,600): #-50,400
        Z_Used = Z_Now
def thread_function(name):
    global X_Used,Y_Used,Z_Used,X_Last,Y_Last,Z_Last,pre_time
    while(1):

        X_Last= ((X_Last * 3) + X_Used) / 4
        Y_Last = ((Y_Last * 3) + Y_Used) / 4
        Z_Last = ((Z_Last * 3) + Z_Used) / 4

        message = ("5 " + str(int(X_Last)) + " " + str(int(Y_Last)) + " " + str(int(Z_Last)) + " " + str(qW) + " " + str(qX) + " " + str(qY) + " " + str(qZ) + " #").encode()
        print(message)
        Send = sock.sendall(message)
        received = sock.recv(200)
        # print('received {!r}'.format(received))
        time.sleep(0.001)

client = mqtt.Client()
client.on_connect = on_connect
client.on_message = on_message
client.connect(host)
x = threading.Thread(target=thread_function, args=(1,))
x.start()
client.loop_forever(timeout=5)





