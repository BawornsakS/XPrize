To Use My Lovely Gazebosim with Gazebo
You need to install Ubuntu 18.04 and Ros Melodic

Preperation:
1.sudo apt-get install ros-melodic-cartographer
2.create workspace
3.copy everythings in famebot_carto and paste in "your_ws"/src/
4.come to your_ws and type catkin_make

in order to run gazebo and cartographer
type this command step by step in your terminal
1.roslaunch mybot_gazebo mybot_world.launch 
2.roslaunch mybot_cartographer mybot.launch 
3.rviz
4.rosrun teleop_twist_keyboard teleop_twist_keyboard.py 
5.use uiojklm,. to control my lovely robot
