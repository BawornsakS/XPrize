roslaunch rtabmap_ros rtabmap.launch     rtabmap_args:="--delete_db_on_start"     rgb_topic:=/zedm/zed_node/rgb/image_rect_color     depth_topic:=/zedm/zed_node/depth/depth_registered     camera_info_topic:=/zedm/zed_node/depth/camera_info     odom_topic:=/zedm/zed_node/odom     visual_odometry:=false     frame_id:=base_link     approx_sync:=false     rgbd_sync:=true     approx_rgbd_sync:=false




roslaunch zed_wrapper zedm.launch 

