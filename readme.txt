编译
cd ~/ros2_wsr
source /opt/ros/humble/setup.bash
colcon build --symlink-install --packages-select je_software

使用时，需要在终端中先source一下编译install的setup.bash文件