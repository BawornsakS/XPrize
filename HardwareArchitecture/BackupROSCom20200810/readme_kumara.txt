#Gazebo Run
roslaunch kumara_gazebo kumara_world.launch 

#Communication with Unity
roslaunch rosbridge_server rosbridge_websocket.launch

#Serial communication

#Must Run >>>> change msg type for mbed 
roslaunch kumara_xprize kumara_serial_node.launch 


### ถ้าอยากเปลี่ยน baud ก็พิมพ์อันนี้ต่อท้าย _port:=/dev/ttyACM0 _baud:=1000000

   #for head
   rosrun rosserial_python kumara_head_serial.py 

   #for base
   rosrun rosserial_python kumara_base_serial.py


ssh -Y kumara@192.168.20.50

