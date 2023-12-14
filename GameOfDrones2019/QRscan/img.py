import cv2
import numpy
# import the necessary packages
from picamera.array import PiRGBArray
from picamera import PiCamera
import time

print("123")
#initialise the camera and grab a reference to raw camera capture 
camera=PiCamera()
print("123")
camera.resolution=(800,600)
rawCapture=PiRGBArray(camera,size=(800,600))
time.sleep(0.1)
print (123)
while(1):
    print("123")
        
# allow the camera to warmup
    time.sleep(0.1)
    print("456")
# grab an image from the camera
    camera.capture(rawCapture, format="bgr")
    camera.capture("foo.jpg")
    frame = rawCapture.array
        
# display the image on screen and wait for a keypress
    cv2.imshow("Image", frame)
    cv2.waitKey(8000)
    cv2.destroyAllWindows()
camera.close()

