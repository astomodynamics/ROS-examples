#!/usr/bin/env python

''' python3.7 script for rotating robot '''

# import libraries
import rclpy
import math
from rclpy.node import Node
import numpy as np
import cv2
import imutils

from geometry_msgs.msg import Point, Twist
from sensor_msgs.msg import CompressedImage


class RotateRobotNode(Node): 
    def __init__(self):
        super().__init__("rotate_robot")

        # self.declare_parameter("", True)
        self._curent_location = None

        self._object_location_subscriber = self.create_subscription(
            Point, "turtlebot_sight/object_location", self.callback_current_location, 10)

        self._cmd_vel_publisher = self.create_publisher(
            Twist, "/cmd_vel", 10)
        
        self.control_loop_timer = self.create_timer(0.01, self.control_loop)
    
    def callback_current_location(self, msg):
        self._current_location = msg


    def control_loop(self):
        if self._current_location == None:
            return

        img_width = 500
        dist_x = self._current_location.x - int(img_width/2)
        dist_y = self._current_location.y - int(img_width/2)
        distance = math.sqrt(dist_x ** 2 + dist_y ** 2)

        msg = Twist()

        if distance > 10:
            # orientation
            goal_theta = math.atan2(dist_y, dist_x)
            diff = goal_theta - self._current.theta

            msg.angular.z = 0.2
        else:
            msg.angular.z = 0.

        self.cmd_vel_publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = RotateRobotNode() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()