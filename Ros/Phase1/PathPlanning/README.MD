Requirment :
1) Ubuntu 18.04
2) ROS Melodic
3) Turtlebot3 Package

Note:
Suitable for any .pgm files with .yaml files which can generate by Slam or virtual Slam by using map_saver

Optional(mapping with slam):
export TURTLEBOT3_MODEL=burger
roslaunch turtlebot3_gazebo [world_name].launch
roslaunch turtlebot3_slam turtlebot3_slam.launch slam_methods:=gmapping
rosrun map_server map_saver -f ~/[map_name]

Command(map file only):
roscore
** source /home/[user]/catkin_ws/devel/setup.bash
export TURTLEBOT3_MODEL=[model]
roslaunch turtlebot3_gazebo turtlebot3_empty_world.launch
roslaunch turtlebot3_navigation turtlebot3_navigation.launch map_file:=$HOME/[map_name].yaml

Command(with map world in gazebo):
roscore
** source /home/[user]/catkin_ws/devel/setup.bash
export TURTLEBOT3_MODEL=[model]
roslaunch turtlebot3_gazebo [world_name].launch
roslaunch turtlebot3_navigation turtlebot3_navigation.launch map_file:=$HOME/[map_name].yaml

