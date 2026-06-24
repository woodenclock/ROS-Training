from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os
import yaml
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


"""
This load_yaml function returns a .yaml file content, given the ROS2 Package name and
relative filepath to that package.
"""

def load_yaml(package_name, file_path):
    package_path = get_package_share_directory(package_name)
    absolute_file_path = os.path.join(package_path, file_path)

    try:
        with open(absolute_file_path, "r") as file:
            return yaml.safe_load(file)
    except EnvironmentError:  # parent of IOError, OSError *and* WindowsError where available
        return None

def generate_launch_description():

    launch_description = LaunchDescription()

    """
    TODO: Add a `Node` for the aruco detection node to the `launch_description`
		- Package Name: Refer to Pratical 8B
		- Executable Name: Refer to Pratical 8B
		- Node Name: `"aruco_detection_node"`
		- Ouput: log

        use the launch_description.add_action(node_variable) to add this node to the LaunchDescription object
    """
    aruco_detection = Node(
        package="camera_service",
        executable="aruco_detection_node",
        name="aruco_detection_node",
        output="log"
    )
    # Using this example, create the rest of the launch node yourself. 

    launch_description.add_action(aruco_detection)

    """
   TODO: Add a `Node` for the object spawner node to the `launch_description`
		- Package Name: Refer to Practical 9A
		- Executable Name: Refer to Practical 9A
		- Node Name: `"object_spawner_node"`
		- Ouput: log

        use the launch_description.add_action(node_variable) to add this node to the LaunchDescription object
    """
    object_spawner = Node(
        package="object_spawner",
        executable="object_spawner_node",
        name="object_spawner_node",
        output="log"
    )

    launch_description.add_action(object_spawner)

    """
    TODO:   We want the rviz configuration from pratical 9. In order to do that we the link to share the directory 
            of the object to do that 

            - We need to create a variable `rviz_config_dir ` using the `os.path.join` and `get_package_share_directory ('package_name'),'folder name' , 'your_rviz_config_file' ` functions.
    """
    rviz_config_dir = os.path.join(
        get_package_share_directory("object_spawner"),
        "rviz",
        "practical_9.rviz"
    )

    """
    TODO: Add a `Node` for the rviz2 node to the `launch_description`
    
		- Package Name: `"rviz2"`
		- Executable Name: `"rviz2"`
		- Node Name: `"rviz2_node"`
		- Ouput: log
		- Arguments: `rviz_config_dir`

        use the launch_description.add_action(node_variable) to add this node to the LaunchDescription object
    """
    rviz2_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2_node",
        output="log",
        arguments=["-d", rviz_config_dir]
    )

    launch_description.add_action(rviz2_node)

    return launch_description