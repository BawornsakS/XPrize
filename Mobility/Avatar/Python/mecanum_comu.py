import paho.mqtt.client as mqtt
import serial

host = "192.168.99.35"
port = 1883

ser = serial.Serial(
port ='/dev/ttyUSB0',
baudrate = 115200,
timeout = 0.01
)

def on_connect(self, client, userdata, rc):
    print("MQTT Connected.")
    self.subscribe("FIBO/MQTT")

def on_message(client, userdata,msg):
        cmd = msg.payload
        if len(cmd)>5:
                ser.write(cmd)
                print(cmd)



client = mqtt.Client()
client.on_connect = on_connect