// Python Raspberry pi code for blinking an LED 10 times


import RPi.GPIO as gpio
import time
gpio.setmode(GPIO.BCM)
gpio.setup(18.,GPIO.OUT)
for i in range(10):
gpio.output(18,GPIO.HIGH)
time.sleep(3)
gpio.output(18,GPIO.LOW)
gpio.cleanup()
Outcome: LED’s are successfully blinked for 10 times.
 
 
 //Python Raspberry pi code for blinking an LED infinite times


import RPi.GPIO as gpio
import time
gpio.setmode(GPIO.BCM)
gpio.setup(18.,GPIO.OUT)
 
while True: gpio.output(18,GPIO.HIGH)
time.sleep(3)
gpio.output(18,GPIO.LOW)
gpio.cleanup()
Outcome: LED’s are successfully blinked for infinite times.
