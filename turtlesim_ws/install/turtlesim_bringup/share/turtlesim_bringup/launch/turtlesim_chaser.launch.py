from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    turtlesim = Node(
        package="turtlesim",
        executable="turtlesim_node"
    )
    
    turtle_spawner_node = Node(
        package="turtlesim_chaser",
        executable="turtle_spawner",
        parameters=[
            {"spawn_frequency": 1.2},
            {"turtle_name_prefix": "my_turtle"}
        ]
    )

    turtle_controller_node = Node(
        package="turtlesim_chaser",
        executable="turtle_controller",
        parameters =[
            {"eliminate_closest_turtle_first": True}
        ]
    )

    ld.add_action(turtlesim)
    ld.add_action(turtle_spawner_node)
    ld.add_action(turtle_controller_node)
    return ld