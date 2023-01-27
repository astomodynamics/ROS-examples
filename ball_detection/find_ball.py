''' python script for ball detection '''
# python 3.7

# import libraries
import numpy as np
import cv2
import imutils


# define lower and upper bounds of colored ball
greenlb = (29, 86, 6)
greenup =  (64, 255, 255)

cap = cv2.VideoCapture(0)

# start the video capture while the task is going
while(True):
    # Capture frame-by-frame
    _, frame = cap.read()

    # blur image 
    blurred = cv2.GaussianBlur(frame, (11, 11), 0)
    
    # convert BGR to HSV
    hsv = cv2.cvtColor(blurred, cv2.COLOR_BGR2HSV)

    # threshhold HSV image 
    mask = cv2.inRange(hsv, greenlb, greenup)
    mask = cv2.erode(mask, None, iterations=2)
    mask = cv2.dilate(mask, None, iterations=2)

    # find contours in the mask 
    contours = cv2.findContours(mask.copy(), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    contours = imutils.grab_contours(contours)

    if len(contours) > 0:
        # locate the centroid
        centroid = max(contours, key=cv2.contourArea)
        ((x, y), radius) = cv2.minEnclosingCircle(centroid)
        M = cv2.moments(centroid)
        
        # print the position of centroid
        print(x,y)
        center = (int(M["m10"] / M["m00"]), int(M["m01"] / M["m00"]))

		# if the colored object is greater than the threshhold, show the circle
        if radius > 70:
            # draw circle and centroid of colored object on the frame
            cv2.circle(frame, (int(x), int(y)), int(radius),(110,50,50), 2)
            cv2.circle(frame, center, 3,  (110,50,50), -1)

            # draw the position of centroid on the frame
            text = 'object (%.1d, %.1d)' % (int(x)+20, int(y)+20)
            cv2.putText(frame, text, (int(x)+10, int(y)+10), cv2.FONT_HERSHEY_SIMPLEX,
                    0.8,(110,50,50), 1)

    # show captured frame 
    cv2.imshow('frame', frame)

    # if you press "Q", then terminate capturing
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# When everything done, release the capture
cap.release()
cv2.destroyAllWindows()