import socket
import sys
import time
import paho.mqtt.client as mqtt

sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_address = ('192.168.125.1', 5000)
print('connecting to {} port {}'.format(*server_address))
sock.connect(server_address)

Mode = "1"
Xl_pos = "500"
Yl_pos = "184"
Zl_pos = "171"
qW = "0.14"
qX = "-0.19"
qY = "-0.98"
qZ = "-0.01"
Send = sock.sendall("8 100 100 #".encode())
received = sock.recv(4096)
print('received {!r}'.format(received))
while(1):
    message = " ".join([str(Mode),str(Xl_pos),str(Yl_pos),str(Zl_pos),str(qW),str(qX),str(qY),str(qZ),"#"]).encode()
    print(message)
    Send = sock.sendall(message)
    print(Send)
    received = sock.recv(4096)
    print('received {!r}'.format(received))
    time.sleep(1)



