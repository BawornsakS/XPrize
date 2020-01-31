import paho.mqtt.client as mqtt
import serial

host = "192.168.99.69"
port = 1883

ser = serial.Serial(
port =''?,
baudrate = ?,
timeout = 0.01
)
def map():
    return 0
def on_connect(self, client, userdata, rc):
    print("MQTT Connected.")
    self.subscribe("FIBO/MQTT")

def on_message(client, userdata,msg):
        cmd = msg.payload
        map(cmd)

client = mqtt.Client()
client.on_connect = on_connect

# 1 loop = 0.02 sec