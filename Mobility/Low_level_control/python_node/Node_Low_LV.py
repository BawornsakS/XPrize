import serial
ser = serial.Serial('com6', 1000000, timeout=1)
while True:
    reading = str(ser.readline())
    reading = reading.replace("b'","")
    reading = reading.replace("\\n'","")
    data = reading.split(",")
    print(data)