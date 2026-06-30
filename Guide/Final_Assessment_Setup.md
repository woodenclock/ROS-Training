# ROS Industrial Consortium Asia Pacific ROS2 Basics Course Final Assessment

This portion covers the final assessment set-up steps for the ROS2 Basics course.
**In essence of time, the trainer may or may not skip this portion, and pre-configure the workspace prior to the final assessment.**

## Learning outcomes

This exercise will test learners on their understanding of all the concepts learnt in the last 3 days and apply it in an application requiring the physical use of a turtlebot3.

## Exercise Objective

In this exercise, you will be applying all the knowledge learnt across the course and design a package that allows a turtlebot to automatically detect and move towards an Aruco marker and stop when the marker is at a certain distance to the marker.

## Technical requirements - Part 1 (Set-up)
This portion of the assessment are a step-by-step tutorial on setting up the neccessary requirements on the turtlebot3 in order to proceed with the final assessment exercise.
All steps in the final assessment should be performed inside of the turtlebot.

### Final Assessment 1.1 - Creating a launch file to open your webcam
1. Install the package `usb_node` to allow the usage of cameras connected via USB on the turtlebot.

```bash
sudo apt-get install ros-version_name-usb-cam
```
Note: You need to replace **version_name** in the above command with the version of ROS that you are running.
To check version name, run the following command:

```bash
echo $ROS_DISTRO
```

2. Next, we need to find the camera connection to which port and index of the turtlebot by using the following command

```bash
ls –ltrh /dev/video*
```
3. Create a launch file `cam.launch.py` within the `final_assessment` package in the workspace.

4. Your launch file should contain **2** nodes:
    - A node to run the camera driver
    - A node to display the camera image

The full code is provided below for you to copy it into the launch file:

```bash
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='usb_cam',
            executable='usb_cam_node_exe',
            parameters=[{
                "video_device": "/dev/video0",
                "image_width": 640,
                "image_height": 480,
                "framerate": 100.0,
                "camera_frame_id": "camera_link",
                "pixel_format": "yuyv",
            }],
            name='camera'
        ),
        Node(
            package='image_view',
            executable='image_view',
            remappings=[
                ('image', 'camera/image_raw'),
            ],
            output='screen',
            emulate_tty=True,
            respawn='false',
            name='image_view'
        ),
    ])
 
```
5. To identify what the node executables are, run the following command

```bash
ros2 pkg executables <camera package name>
```

6. `Build` the package. 

7. Run the `launch` file in one terminal

```bash
ros2 launch <camera_package_name> cam.launch.py
```
8. Change the mapping to camera
In another terminal, run the following command 
```bash
ros2 run tf2_ros static_transform_publisher 0 0 0 0 0 0 map default_cam
```
Keep changing the values in the command as we want to see the transformation in RViz.

The value format is **x y z qz qy qz** and the units are in **radians**.

9. In another terminal, launch RViz2
```bash
rviz2
```
10. Within the RViz window, perform the following steps:
 - Click Add
 - Select `by topic` tab
 - Select `/image_raw` and `Camera[raw]`

<img src="./images/bytopic.png"  width="80%" height="80%">
<br>
 - Click Add , follow by By Topic again and this time add `Image`
 - Next, click add and select `by display type` followed by `TF`

<img src="./images/rviz.png"  width="80%" height="80%">
<br>


### Final Assessment 1.2 - Camera Calibration
In this portion of the assessment, we will be going through a step-by-step on how to calibrate our camera for the final assessment exercise.
**https://navigation.ros.org/tutorials/docs/camera_calibration.html (size 8x6)**

1. Install the neccessary packages required which are: `camera calibration parser`, `camera info manager` and `launch testing` using the following command
```bash
sudo apt install ros-humble-camera-calibration-parsers
sudo apt install ros-humble-camera-info-manager
sudo apt install ros-humble-launch-testing-ament-cmake
```
2. Install the `image_pipeline` package from source to be built within your workspace
```bash
git clone -b humble https://github.com/ros-perception/image_pipeline.git
```

3. Launch the ROS driver for the camera
4. Make sure that the camera is publishing images over ROS by running
```bash
ros2 topic list
```
5. Start the camera_calibration node
```bash
ros2 run camera_calibration cameracalibrator --size 8x6 --square 0.20 image: image_raw
```

6. Once the calibration is completed, click `Save` and `Commit`.
Locate the generated file and do the following in order to make it accessible by the workspace.
```bash
 tar -xvf calibration.tar.gz
```
7. Locate the calibration configuration (.yaml) file and create a `config` folder and copy it into the folder.

8. Insert a new line of parameter for your camera node within the `launch` file of your the camera driver node parameters you have created previously.
```bash
“camera_info_url”: ”package://final_assessment/config/ost.yaml”,
```
