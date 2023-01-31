#!/usr/bin/env python3
import math
import rclpy
from rclpy.node import Node

from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from functools import partial
from turtlesim_interfaces.msg import Turtle
from turtlesim_interfaces.msg import TurtleArray
from turtlesim_interfaces.srv import EliminateTurtle

class TurtleControllerNode(Node):
    def __init__(self):
        super().__init__("turtle_controller") 
        self.declare_parameter("eliminate_closest_turtle_first", True)

        self.eliminate_closest_turtle_first_ = self.get_parameter(
            "eliminate_closest_turtle_first").value
        self.turtle_to_chase_ = None
        self.pose_ = None
        self.cmd_vel_publisher_ = self.create_publisher(
            Twist, "turtle1/cmd_vel", 10
        )
        self.pose_subscriber_ = self.create_subscription(
            Pose, "turtle1/pose", self.callback_turtle_pose, 10
        )
        self.alive_turtles_subscriber_ = self.create_subscription(
            TurtleArray, "alive_turtles", self.callback_alive_turtles, 10
        )
        self.control_loop_timer = self.create_timer(0.01, self.control_loop)
    
    def callback_alive_turtles(self, msg):
        if len(msg.turtles) > 0:
            if self.eliminate_closest_turtle_first_:
                closest_turtle = None
                closest_turtle_distance = None

                for turtle in msg.turtles:
                    dist_x = turtle.x - self.pose_.x
                    dist_y = turtle.y - self.pose_.y
                    distance = math.sqrt(dist_x ** 2 + dist_y ** 2)
                    if closest_turtle == None or distance < closest_turtle_distance:
                        closest_turtle = turtle
                        closest_turtle_distance = distance
                self.turtle_to_chase_ = closest_turtle
            else:
                self.turtle_to_chase_ = msg.turtles[0]

    def callback_turtle_pose(self, msg):
        self.pose_ = msg
    
    def control_loop(self):
        if self.pose_ == None or self.turtle_to_chase_ == None:
            return
        dist_x = self.turtle_to_chase_.x - self.pose_.x
        dist_y = self.turtle_to_chase_.y - self.pose_.y
        distance = math.sqrt(dist_x ** 2 + dist_y ** 2)

        msg = Twist()

        if distance > 0.5:
            # position
            msg.linear.x = 2 * distance

            # orientation
            goal_theta = math.atan2(dist_y, dist_x)
            diff = goal_theta - self.pose_.theta

            if diff > math.pi:
                diff -= 2*math.pi
            elif diff < -math.pi:
                diff += 2*math.pi

            msg.angular.z = 6 * diff
        else:
            # target reached
            msg.linear.x = 0.0
            msg.angular.z = 0.0
            self.call_eliminate_turtle_server(self.turtle_to_chase_.name)
            self.turtle_to_chase_ = None

        self.cmd_vel_publisher_.publish(msg)

    def call_eliminate_turtle_server(self, turtle_name):
        client = self.create_client(EliminateTurtle, "eliminate_turtle")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server Kill a turtle...")

        request = EliminateTurtle.Request()
        request.name = turtle_name

        future = client.call_async(request)
        future.add_done_callback(
            partial(self.callback_call_eliminate_turtle, turtle_name=turtle_name))

    def callback_call_eliminate_turtle(self, future, turtle_name):
        try:
            response = future.result()
            if not response.success:
                self.get_logger().error("Turtle " + str(turtle_name) + " could not be eliminated")

        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))


def main(args=None):
    rclpy.init(args=args)
    node = TurtleControllerNode() 
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
