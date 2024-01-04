import RPi.GPIO as GPIO
import time
 
GPIO.setmode(GPIO.BCM)
GPIO.setup(18, GPIO.OUT)
GPIO.setup(4, GPIO.OUT)
GPIO.setup(17, GPIO.OUT)
GPIO.setup(27, GPIO.OUT)
 
GPIO.output (18, GPIO.HIGH)
GPIO.output (4, GPIO.LOW)
GPIO.output (17, GPIO.HIGH)
GPIO.output (27, GPIO.LOW)
 
time.sleep (5)
GPIO.output(18, GPIO.LOW)
GPIO.output (4, GPIO.HIGH)
GPIO.output (17, GPIO. LOW)
GPIO.output (27, GPIO.HIGH)
GPIO.cleanup()  
