import serial
import paho.mqtt.client as mqtt
host = "broker.mqttdashboard.com"
port = 8000
ser = serial.Serial(port ='COM21',baudrate = 115200,timeout = 0.01 )
client = mqtt.Client()
client.connect(host)
while(1):
    # datain = str(ser.readline())
    datain = ser.read(7)
    # datain ="b''+000+100+000\n"+"\n"
    # datain = datain.replace("\n","")
    # datain = datain[2:14]
    if len(datain)>5:
        # datain = datain[2:-1]
        client.publish("FIBO/MQTT", datain)
        print(datain)

# ได้ raw data ทีมี ตัว b'xxx' ติดมาด้วย