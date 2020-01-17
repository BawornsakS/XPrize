import socket
import sys
import time
import paho.mqtt.client as mqtt

sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_address = ('192.168.125.1', 5000)
print('connecting to {} port {}'.format(*server_address))
sock.connect(server_address)

Mode = "1"
Xl_pos = 400
Yl_pos = "500"
Zl_pos = "300"
qW = "0.5218"
qX = "-0.49017"
qY = "0.48419"
qZ = "-0.50301"
while(1):
    message = " ".join([str(Mode),str(Xl_pos),str(Yl_pos),str(Zl_pos),str(qW),str(qX),str(qY),str(qZ),"#"]).encode()
    print(message)
    Send = sock.sendall(message)
    print(Send)
    received = sock.recv(4096)
    print('received {!r}'.format(received))
    Xl_pos += 15
    time.sleep(1)



