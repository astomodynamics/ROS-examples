from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    find_object_node = Node(
        package="object_follower",
        executable="find_object"
    )

    rotate_robot_node = Node(
        package='object_follower',
        executable="rotate_robot"
    )

    ld.add_action(find_object_node)
    ld.add_action(rotate_robot_node)
    return ld