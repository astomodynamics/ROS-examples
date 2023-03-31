#!/usr/bin/env python

''' python3.7 script for ball detection '''

# import libraries
import rclpy
from rclpy.node import Node
import numpy as np
import cv2
from cv_bridge import CvBridge

from geometry_msgs.msg import Point, Twist
from std_msgs.msg import String
from sensor_msgs.msg import LaserScan
from sensor_msgs.msg import CompressedImage
from sensor_msgs.msg import Image
from rclpy.qos import QoSProfile, QoSDurabilityPolicy, QoSReliabilityPolicy, QoSHistoryPolicy

class GetObjectRangeNode(Node): 
    def __init__(self):
        # create the node
        super().__init__("get_object_range") 

        self.declare_parameter('gazebo_env', False)
        
        # Decrare gazebo simulation or not
        self._gazebo_env = bool(self.get_parameter('gazebo_env').value)

        # subscrible topics
        self._object_location = None
        self._object_location_subscriber = self.create_subscription(
            Point, "/object/object_location", self._callback_location, 10)

        lidar_qos_profile = QoSProfile(
		    reliability=QoSReliabilityPolicy.RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT,
		    history=QoSHistoryPolicy.RMW_QOS_POLICY_HISTORY_KEEP_LAST,
		    durability=QoSDurabilityPolicy.RMW_QOS_POLICY_DURABILITY_VOLATILE,
		    depth=1
		)

        self._lidar_subscriber = self.create_subscription(
            LaserScan,'/scan', self._callback_lidar, lidar_qos_profile)

        self._is_point_ready = False
        self._lidar_err = 0.005

        self._object_range_publisher = self.create_publisher(
            Twist, "/object/range", 10)

        

    
    def _callback_location(self, msg):
        self._object_location = msg

    def _callback_lidar(self, LaserScan):
        if self._object_location == None:
                return

        object_range = Twist()

        range_data = []
        # determine local angles for lidar
        current_angle = self._object_location.x

        if current_angle < 0:
            current_angle = abs(current_angle)
        elif current_angle > 0:
            current_angle = 2*np.pi - current_angle

        if self._gazebo_env:
            # NOTE array setting in gazebo is below:
            # LaserScan.ranges[0]   -> values at 0 deg
            # LaserScan.ranges[179] -> values at 180 deg
            # LaserScan.ranges[359] -> values at 360 deg

            current_angle_degint = int(np.rad2deg(current_angle))
            range_data = LaserScan.ranges[current_angle_degint]
            object_range.linear.x = np.mean(range_data)
            object_range.angular.z = self._object_location.x
            self._object_range_publisher.publish(object_range)

        else:
            # find  closest angle measurements to current angle
            range_arr = LaserScan.ranges
            max_angle = LaserScan.angle_max
            min_angle = LaserScan.angle_min
            range_coef = (max_angle - min_angle)/len(range_arr)

            angles_of_interest = [int(range_coef * current_angle + i) for i in range(0,3)]
            
            for angle_ind in angles_of_interest:
                range_ele = LaserScan.ranges[angle_ind]
                if range_ele < 10:
                    range_data.append(range_ele)
                
            object_range.linear.x = np.mean(range_data)
            object_range.angular.z = self._object_location.x

            self._object_range_publisher.publish(object_range)


def main(args=None):
    rclpy.init(args=args)
    node = GetObjectRangeNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()