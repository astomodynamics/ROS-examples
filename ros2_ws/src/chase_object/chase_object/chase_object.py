#!/usr/bin/env python

''' python3.7 script for rotating robot '''

# import libraries
import rclpy
import math
from rclpy.node import Node
import numpy as np
import cv2

from geometry_msgs.msg import Point, Twist
from sensor_msgs.msg import CompressedImage


class ChaseObjectNode(Node): 
    def __init__(self):
        super().__init__("chase_object")

        self._object_range = None

        self._object_range_subscriber = self.create_subscription(
            Twist, "/object/range", self.callback_object_range, 10)

        self._control_cmd_publisher = self.create_publisher(Twist, "/cmd_vel", 10)
        
        dt = 0.01
        self._control_loop_timer = self.create_timer(dt, self.control_loop)

        self._pixel_height = 240
        self._pixel_width = 320
        self._desired_dist = 1.

        self._lin_pid_params = PIDParams(kp=0.1, ki=0.00, kd=0.00, dt=dt, sigma=0.2,umin=-1.,umax=1.)
        self._ang_pid_params = PIDParams(kp=1.0, ki=0.0, kd=0.001, dt=dt, sigma=0.2, umin=-3., umax=3.)


    def callback_object_range(self, msg):
        self._object_range = msg

    def control_loop(self):
        if self._object_range == None:
            return

        dist = self._object_range.linear.x
        theta = self._object_range.angular.z
        err = self._desired_dist - dist

        u_lin = -self._lin_pid_params.pid(err)
        u_ang = -self._ang_pid_params.pid(theta)

        control_cmd = Twist()
        control_cmd.linear.x = u_lin
        control_cmd.angular.z = u_ang
        self._control_cmd_publisher.publish(control_cmd)

class PIDParams():
    def __init__(self,kp=1,ki=5,kd=0.1,dt=1,sigma=.1,umin = 0, umax =1,epsilon = 0.01):
        self.kp = kp
        self.ki = ki
        self.kd = kd
        self.err = 0
        self.err_old = 0
        self.err_cum = 0
        self.err_rate = 0
        self.dt = dt
        self.beta = (2.0 * sigma - dt) / (2.0 * sigma + dt)
        self.umin = umin
        self.umax = umax
        self.epsilon = epsilon

    def pid(self,err):
        # if abs(err) < self.epsilon:
            # err = 0
        self.err = err
        self.err_cum += (err + self.err_old)/2*self.dt
        self.err_rate = self.beta*self.err_rate + (1-self.beta)*(err-self.err_old)/self.dt

        #Account for saturation
        u_unsat = self.kp*self.err + self.ki*self.err_cum + self.kd*self.err_rate
        if u_unsat < self.umin:
            u = self.umin
        elif u_unsat > self.umax:
            u = self.umax
        else:
            u = u_unsat
            
        #Anti-Integral Windup
        # if self.ki > 0:
        #     self.err_cum += (u-u_unsat)/self.ki

        self.err_old = err

        return float(u)
    
    def reset(self,):
        self.err = 0
        self.err_old = 0
        self.err_cum = 0
        self.err_rate = 0

def main(args=None):
    rclpy.init(args=args)
    node = ChaseObjectNode() 
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()