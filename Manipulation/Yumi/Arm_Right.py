import socket
import sys
import time
import paho.mqtt.client as mqtt

host = "192.168.99.41"
port = 1883
Mode = "1"
Xl_pos = "400"
Yl_pos = "-500"
Zl_pos = "300"
qW = "0.5218"
qX = "-0.49017"
qY = "0.48419"
qZ = "-0.50301"

sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_address = ('127.0.0.1', 5001)
print('connecting to {} port {}'.format(*server_address))
sock.connect(server_address)
Send = sock.sendall("8 100 100 #".encode())
received = sock.recv(4096)
print('received {!r}'.format(received))

def on_connect(self, client, userdata, rc):
    print("MQTT Connected.")
    self.subscribe("/operator/hand/right")
    
def on_message(client, userdata,msg):
    data_Q = msg.payload.decode("utf-8", "strict")
    received_MQTT = (str(data_Q)+",#").split(",")
    print(received_MQTT)
    message = " ".join(received_MQTT)
    print(message)
    Send = sock.sendall(message.encode())
    print(Send)
    received = sock.recv(4096)
    print('received {!r}'.format(received))
    time.sleep(1)

client = mqtt.Client()
client.on_connect = on_connect
client.on_message = on_message
client.connect(host)
client.loop_forever(timeout=5)

