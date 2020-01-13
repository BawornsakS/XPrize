# import time
import serial

ser = serial.Serial(
    port ='/dev/ttyACM0',
    baudrate = 1000000,
    timeout = 0.01)
while(1):
    datain = str(ser.readline())
    datain = datain.replace("b'","")
    datain = datain.replace("'","")
    datain = datain.replace("\\n","")
    
    if (datain == ""):
        continue
    # if (datain[0] == "#" and datain[-1] == "#"):
    #     datain = datain.replace("#","")
    #     dataout = datain.split(",")
    #     ax = float(dataout[0])
    #     an = float(dataout[1])
    #     az = float(dataout[2])
    #     gx = int(dataout[3])
    #     gn = int(dataout[4])
    #     gz = int(dataout[5])
    #     # print(datain)
    # if (datain[0] == "|" and datain[-1] == "|"):
    #     datain = datain.replace("|","")
    #     dataout = datain.split(",")
    #     v1 = int(dataout[0])
    #     v2 = int(dataout[1])
    #     v3 = int(dataout[2])
    #     v4 = int(dataout[3])
    #     # print(datain)
    print(datain)
