#!/usr/bin/env python

''' python3.7 script for ball detection '''

# import libraries
import rclpy
from rclpy.node import Node
import numpy as np
import cv2
from cv_bridge import CvBridge
import imutils


from geometry_msgs.msg import Point
from sensor_msgs.msg import CompressedImage
from sensor_msgs.msg import Image
from rclpy.qos import QoSProfile, QoSDurabilityPolicy, QoSReliabilityPolicy, QoSHistoryPolicy

class FindObjectNode(Node): 
    def __init__(self):
        # create the node
        super().__init__("find_object") 
        
        # set parameters
        self.declare_parameter('show_image_bool', True)
        self.declare_parameter('window_name', "Raw Image")
        # self.declare_parameter('color_lb', )

        # determine window showing based on input
        self._display_image = bool(self.get_parameter('show_image_bool').value)

        # Declare some variables
        self._titleOriginal = self.get_parameter('window_name').value # Image Window Title	

        # Set up QoS Profiles for passing images over WiFi
        image_qos_profile = QoSProfile(
		    reliability=QoSReliabilityPolicy.RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT,
		    history=QoSHistoryPolicy.RMW_QOS_POLICY_HISTORY_KEEP_LAST,
		    durability=QoSDurabilityPolicy.RMW_QOS_POLICY_DURABILITY_VOLATILE,
		    depth=1
		)

        # self._img_subscriber = self.create_subscription(CompressedImage,
        #     '/camera/image/compressed', self._image_callback, image_qos_profile)

        # if you run in gazebo use this for subscriber
        self._img_subscriber = self.create_subscription(Image,
            '/camera/image_raw', self._image_callback, image_qos_profile)

        # green
        # self._colorlb = (25, 60, 0)
        # self._colorub = (90, 255, 255)

        # blue
        # self._colorlb = ( 90, 70, 100)
        # self._colorub = (120, 200, 255)

        # yellow
        self._colorlb = (25, 50, 70)
        self._colorub = (35, 255, 255)

        self.object_location_publisher = self.create_publisher(
            Point, "object_location", 10)

        self._img_subscriber # Prevents unused variable warning.

    # def _image_callback(self, CompressedImage):
        # self._imgBGR = CvBridge().compressed_imgmsg_to_cv2(CompressedImage, "bgr8")
    
    # when you simulate in Gazebo
    def _image_callback(self, Image):
        self._imgBGR = CvBridge().imgmsg_to_cv2(Image, "bgr8")
        

        # blur image 
        blurred = cv2.GaussianBlur(self._imgBGR, (11, 11), 0)
    
        # convert BGR to HSV
        hsv = cv2.cvtColor(blurred, cv2.COLOR_BGR2HSV)

        # threshhold HSV image 
        mask = cv2.inRange(hsv, self._colorlb, self._colorub)
        mask = cv2.erode(mask, None, iterations=2)
        mask = cv2.dilate(mask, None, iterations=2)

        # find contours in the mask 
        contours, _ = cv2.findContours(mask.copy(), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        
        # create Point to be published
        object_location = Point()

        if len(contours) > 0:
            # locate the centroid
            centroid = max(contours, key=cv2.contourArea)
            ((x, y), radius) = cv2.minEnclosingCircle(centroid)
            M = cv2.moments(centroid)
            
            center = (int(M["m10"] / M["m00"]), int(M["m01"] / M["m00"]))

            # if the colored object is greater than the threshhold, show the circle
            if radius > 20:
                # draw rectangle and centroid of colored object on the frame
                cv2.circle(self._imgBGR, (int(x), int(y)), int(radius),(110,50,50), 2)
                cv2.circle(self._imgBGR, center, 3,  (110,50,50), -1)
                text = 'object (%.1d, %.1d)' % (int(x), int(y))
                cv2.putText(self._imgBGR, text, (int(x)+10, int(y)+10), cv2.FONT_HERSHEY_SIMPLEX,
                        0.5,(110,50,50), 1)

                object_location.x = x
                object_location.y = y
                object_location.z = 0.
                self.object_location_publisher.publish(object_location)
            else:
                object_location.x = 160.
                object_location.y = 0.
                object_location.z = 0.
                self.object_location_publisher.publish(object_location)


        if(self._display_image):
            # Display the image in a window
            self.show_image(self._imgBGR)

        # if you press "Q", then terminate the loop
        cv2.waitKey(1) & 0xFF == ord('q')

    def show_image(self, img):
        cv2.imshow(self._titleOriginal, img)
        # Cause a slight delay so image is displayed
        self._user_input=cv2.waitKey(50) #Use OpenCV keystroke grabber for delay.



def main(args=None):
    rclpy.init(args=args)
    node = FindObjectNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()