from launch import LaunchDescription
from launch_ros.actions import Node
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    joy_node = Node(
        package="joy",
        executable="joy_node",
        name="joystick",
        parameters=[os.path.join(get_package_share_directory("walle_controller"), "config", "joy_config.yaml")]
    )

    joy_teleop_node = Node(
        package="joy_teleop",
        executable="joy_teleop",
        name="joy_teleop_node",
        parameters=[os.path.join(get_package_share_directory("walle_controller"), "config", "joy_teleop.yaml")]
    )

    return LaunchDescription([
        joy_node,
        joy_teleop_node
    ])
