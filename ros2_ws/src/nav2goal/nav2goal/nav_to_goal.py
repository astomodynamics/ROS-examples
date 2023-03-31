#!/usr/bin/env python3
# import libraries
import rclpy
import math
import time
from rclpy.node import Node
import numpy as np

from geometry_msgs.msg import PoseStamped
from nav2_msgs.action._navigate_to_pose import NavigateToPose_FeedbackMessage
from rclpy.qos import QoSProfile, QoSDurabilityPolicy, QoSReliabilityPolicy, QoSHistoryPolicy


class nav2goalNode(Node): 
    def __init__(self):
        super().__init__("nav_to_goal")

        print("=== start nav2goal ===")

        self._current_goal_ind = 0
        self._wayPoints_pos = [
            [2.0, -0.86, 0.0],
            [3.78, 0.99, 0.0],
            [3.9, -0.85, 0.0]
        ]

        self._wayPoints_ori = [
            [0.0, 0.0, 0.0, 1.0],
            [0.0, 0.0, 0.0, 1.0],
            [0.0, 0.0, 0.0, 1.0]
        ]

        # for lab 5
        # self._wayPoints_pos = [
        #     [0.985, 0.981, 0.0],
        #     [-0.031, 0.364, 0.0],
        #     [1.92, 0.85, 0.0]
        # ]

        # self._wayPoints_ori = [
        #     [0.0, 0.0, -0.1754, 0.9845],
        #     [0.0, 0.0, 0.0004, 0.9999],
        #     [0.0, 0.0, 0.7031, 0.7111]
        # ]

        # subscribe topic
        nav_qos_profile = QoSProfile(
		    reliability=QoSReliabilityPolicy.RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT,
		    history=QoSHistoryPolicy.RMW_QOS_POLICY_HISTORY_KEEP_LAST,
		    durability=QoSDurabilityPolicy.RMW_QOS_POLICY_DURABILITY_VOLATILE,
		    depth=1
		)
        self._pose_subscriber = self.create_subscription(
            NavigateToPose_FeedbackMessage, 
            "/navigate_to_pose/_action/feedback", 
            self._callback_pose,
            nav_qos_profile)
        
        # publish topic
        self._goal_pose_publisher = self.create_publisher(PoseStamped, "/goal_pose", 10)
        self._control_loop_timer = self.create_timer(0.1, self._control_loop)

        self._is_goal_reached = False
        self._goal_pos = np.array(self._wayPoints_pos[self._current_goal_ind])
        self._goal_ori = np.array(self._wayPoints_ori[self._current_goal_ind])
        self._time_start = time.time()
        self._time_wait = 3.0

    def _callback_pose(self,msg):
        pose = msg.feedback.current_pose.pose
        pos = pose.position # cartesian position
        pos = np.array([
            pos.x,
            pos.y,
            pos.z
        ])

        ori = pose.orientation # quaternion attitude
        ori = np.array([
            ori.x,
            ori.y,
            ori.z,
            ori.w
        ])

        pos_err = np.linalg.norm(pos - self._goal_pos)
        ori_err = np.linalg.norm(ori - self._goal_ori)

        if pos_err < 0.5 and ori_err < 0.3 and not self._is_goal_reached:
            print("goal" + str(self._current_goal_ind+1) + "reached")
            if time.time() - self._time_start > 2.0:
                self._current_goal_ind += 1
                self._time_start = time.time()
                if self._current_goal_ind >= len(self._goal_pos):
                    self._is_goal_reached = True
                    print("=== goal reached ===")


    def _control_loop(self):

        if not self._is_goal_reached:
            self._goal_pos = np.array(self._wayPoints_pos[self._current_goal_ind])
            self._goal_ori = np.array(self._wayPoints_ori[self._current_goal_ind])

            # set goal pose
            goal_pose = PoseStamped()
            goal_pose.header.frame_id = 'map_ts'
            # goal_pose.header.stamp = navig
            goal_pose.pose.position.x = self._goal_pos[0]
            goal_pose.pose.position.y = self._goal_pos[1]
            goal_pose.pose.position.z = self._goal_pos[2]
            goal_pose.pose.orientation.x = self._goal_ori[0]
            goal_pose.pose.orientation.y = self._goal_ori[1]
            goal_pose.pose.orientation.z = self._goal_ori[2]
            goal_pose.pose.orientation.w = self._goal_ori[3]
            self._goal_pose_publisher.publish(goal_pose)

def main(args=None):
    rclpy.init(args=args)
    node = nav2goalNode() 
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()