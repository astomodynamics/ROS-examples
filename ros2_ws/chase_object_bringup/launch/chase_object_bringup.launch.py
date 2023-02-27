from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    detect_object_node = Node(
        package="chase_object",
        executable="detect_object"
    )

    get_object_range_node = Node(
        package="chase_object",
        executable="get_object_range"
    )

    chase_object_node = Node(
        package="chase_object",
        executable="chase_object"
    )

    ld.add_action(detect_object_node)
    ld.add_action(get_object_range_node)
    ld.add_action(chase_object_node)
    return ld