<div align="center">
  
  # IOT
  </div>

## Introduction

The Internet of Things (IoT) refers to the network of interconnected devices and objects that can communicate and exchange data over the Internet. These devices can range from sensors and actuators to everyday objects such as home appliances, vehicles, and more. IoT has transformed various industries, enabling smart homes, industrial automation, healthcare innovations, and environmental monitoring.

This repository aims to provide a hands-on learning experience for IoT enthusiasts, students, and developers. Each experiment focuses on a specific aspect of IoT technology and provides step-by-step instructions, code samples, and explanations to help you build and understand IoT systems.

$~~~$

## Experiment 1

### Screenshot
![Experiment 1](https://github.com/Kshitijkumar15/IOT/blob/Beginning/Screenshot%202023-09-01%20at%2009.31.25.png)

$~~~$

### Prerequisites

Before you get started, make sure you have the following:

- Arduino UNO board
- Four LEDs (any colour)
- Four 220-330 ohm resistors
- Breadboard and jumper wires
- Arduino IDE installed on your computer

$~~~$

### Hardware Setup

1. Connect each LED to a digital pin on the Arduino UNO as follows:
   - LED 1: Connect to digital pin 13
   - LED 2: Connect to digital pin 12
   - LED 3: Connect to digital pin 8
   - LED 4: Connect to digital pin 7

2. Connect a 220-330 ohm resistor to each LED's longer (anode) leg. Connect the other end of each resistor to the ground (GND) pin on the Arduino.

3. Make sure your hardware connections match the program's pin assignments in the code.

$~~~$

### Upload the Code

1. Open the Arduino IDE on your computer.

2. Copy the provided Arduino code (from this README) and paste it into a new Arduino sketch.

3. Connect your Arduino UNO to your computer via USB.

4. Select the correct board and port from the "Tools" menu in the Arduino IDE.

5. Click the "Upload" button to upload the code to your Arduino UNO.

$~~~$

### Running the Program

The program will run automatically once you've uploaded the code to your Arduino UNO. The LEDs connected to digital pins 10, 11, 12, and 13 will blink in sequence. Each LED will turn on for 300 milliseconds and then turn off for 300 milliseconds before the next LED starts.

$~~~$
[Code](https://github.com/Kshitijkumar15/IOT/blob/Beginning/LED.ino)

$~~~$

## Experiment 2 (Blinking Odd and Even LEDs together)
This is a simple Arduino sketch to create a blinking pattern on a set of LEDs using an array and modulo logic. In this example, we will use six LEDs connected to pins 8 through 13 on the Arduino board.

$~~~$

### Screenshot
<img width="1052" alt="Screenshot 2023-09-07 at 18 31 28" src="https://github.com/Kshitijkumar15/IOT/assets/66892634/79359241-f42d-456f-84e0-a69f7441e3bc">

$~~~~$

### Prerequisites

- Arduino board (e.g., Arduino Uno)
- Six LEDs
- Six 220-330 Ohm resistors
- Jumper wires
- Arduino IDE (https://www.arduino.cc/en/software)
- Circuit Diagram

$~~~$

### Connect the LEDs to the Arduino as follows:

LED 1: Pin 8
LED 2: Pin 9
LED 3: Pin 10
LED 4: Pin 11
LED 5: Pin 12
LED 6: Pin 13

$~~~$

### How It Works

This Arduino sketch defines an array ledPins that holds the pins to which the LEDs are connected and a variable lightModulo to control the blinking pattern. In the setup function, it sets the pins as OUTPUT and initializes serial communication.

The loop function repeatedly calls TurnOnEvenOdd, which controls the LED blinking pattern. It toggles the LEDs on and off in an even/odd pattern based on the lightModulo value. The lightModulo value is decremented and then made positive to create a continuous alternating pattern. A delay is used to control the speed of the blinking.

Upload this sketch to your Arduino board, and you will see the LEDs blinking in an even/odd pattern. You can adjust the delayTime variable to change the blinking speed.

### Customization

You can customize this program in various ways:

- Adjust the pin assignments in the code if you want to connect LEDs to different pins.
- Change the code's delay duration to control the LEDs' blinking speed.
- Modify the code to include additional LEDs or create different blinking patterns.


<div align="center">
  
 <b>End</b>
  </div>
  
$~~~$


