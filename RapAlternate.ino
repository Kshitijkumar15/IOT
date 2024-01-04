
import RPi.GPIO as gpio
import time
    gpio.setmode(GPIO.BCM) //BCM: BROADCOM[gpio  no’s are arranged ]  
 
 
gpio.setup(18, GPIO.OUT)  // configuring LED’s as output devices
gpio.setup(4, GPIO.OUT)      
 
gpio.output(18,GPIO.HIGH) //blink LED1 as high(on)
gpio.output(4,GPIO.LOW)    //blink LED2 as low(off)
 
time.sleep(3)                    
 
gpio.output(4,GPIO.HIGH) //blink LED2 as high(on)
gpio.output(18,GPIO.LOW) //blink LED1 as low(off)
 
   gpio.cleanup()   
