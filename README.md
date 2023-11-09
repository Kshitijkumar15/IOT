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
$~~~~$

[Code](https://github.com/Kshitijkumar15/IOT/blob/Beginning/Odd-Even.ino)

$~~~~$
### Customization

You can customize this program in various ways:

- Adjust the pin assignments in the code if you want to connect LEDs to different pins.
- Change the code's delay duration to control the LEDs' blinking speed.
- Modify the code to include additional LEDs or create different blinking patterns.




## Experiment 3 LED Control with Push Button

This simple Arduino program allows you to control the ON and OFF functionality of an LED using a push button with an Arduino UNO board. When the button is pressed, the LED turns on, and when it is pressed again, the LED turns off. This cycle continues each time the button is pressed.

### Circuit


To get started, you'll need the following components:

- Arduino UNO board
- LED (connected to pin 8)
- Push button (connected to pin 7)

Here's a screenshot of the circuit setup in Tinkercad:

![Circuit Screenshot](https://github.com/Princepm02/Internet_of_Things/assets/91951172/7e4920ab-c070-421a-8a81-310fa0e9fa3b)

### How It Works

The program initializes two constants: `LED` (connected to pin 8) and `BUTTON` (connected to pin 7). It also initializes an integer variable `bState` to keep track of the button state.

In the `setup()` function:
- `pinMode(BUTTON, INPUT)` configures the button pin as an input.
- `pinMode(LED, OUTPUT)` configures the LED pin as an output.

In the `loop()` function:
- `digitalRead(BUTTON)` checks the state of the button. If the button is pressed (its state is HIGH), the LED is turned on.
- The `bState` variable is incremented by 1.
- If `bState` is even (i.e., divisible by 2), the LED is turned off, and `bState` is reset to 0.
- A small delay of 100 milliseconds is added to debounce the button and prevent multiple toggles when the button is held down.

This process allows the LED to be toggled on and off each time the button is pressed.

### Usage

1. Connect the LED's anode (longer lead) to pin 8 on the Arduino UNO and the cathode (shorter lead) to the ground (GND) pin through a current-limiting resistor (usually around 220-330 ohms).
2. Connect one terminal of the push button to pin 7 on the Arduino UNO and the other terminal to the ground (GND) pin.
3. Upload this Arduino sketch to your Arduino UNO board using the Arduino IDE.
4. Open the Serial Monitor to see the program in action.
5. Press the push button to toggle the LED on and off.

### Contributing

If you have any suggestions or improvements, please feel free to open an issue or create a pull request.

### Experiment 4  Traffic Light Control for Car and Pedestrians

This Arduino program simulates a traffic light system for both cars and pedestrians. The traffic lights change based on the input from a push-button switch. When the switch is pressed, the traffic lights cycle through their phases, allowing cars and pedestrians to safely navigate the intersection.

### Hardware Requirements

To run this project, you'll need the following components:

- Arduino board (Arduino UNO)
- Individual LEDs for car and pedestrian lights
- Push-button switch
- Resistors (for current limiting, typically 220-330 ohms)
- Jumper wires
- Breadboard 

### Circuit Diagram

This circuit simulates a traffic light system for both cars and pedestrians. Below are two screenshots illustrating different states of the traffic lights.

### State 1: Car Green and Pedestrian Red

In this state, cars have the green light to proceed, while pedestrians have a red light indicating they should not cross the road.

![State 1 - Car Green and Pedestrian Red](https://github.com/Princepm02/Internet_of_Things/assets/91951172/25a2a661-ae08-43eb-88e5-f3ceda48291e)

### State 2: Car Red and Pedestrian Green

In this state, cars have a red light, instructing them to stop, while pedestrians are given a green light to safely cross the road.

![State 2 - Car Red and Pedestrian Green](https://github.com/Princepm02/Internet_of_Things/assets/91951172/96598490-02ad-49b5-8c7b-0155f55b43e7)

### How It Works

The program uses the following pins on the Arduino board:

- `pushButton` (connected to pin 2)
- Car traffic lights:
  - `carRed` (connected to pin 12)
  - `carYellow` (connected to pin 11)
  - `carGreen` (connected to pin 10)
- Pedestrian traffic lights:
  - `pedRed` (connected to pin 7)
  - `pedGreen` (connected to pin 6)

The `crossTime` variable sets the duration for which the pedestrian signal is green (in milliseconds).

In the `setup()` function:

- Serial communication is initiated at a baud rate of 9600 (for debugging purposes).
- Pin modes are set for input (pushButton) and output (all traffic light LEDs).
- Initially, the car's green light and the pedestrian's red light are turned on.

In the `loop()` function:

- The program continuously monitors the state of the push-button switch.
- When the button is pressed (HIGH) and the specified time (5 seconds) has passed since the last change of lights, the `changeLights()` function is called.

The `changeLights()` function:

- Sequentially changes the traffic lights to simulate the traffic light cycle:
  1. Car green -> Car yellow
  2. Car yellow -> Car red
  3. Car red -> Pedestrian green
  4. Pedestrian green blinks 10 times
  5. Pedestrian green -> Pedestrian red
  6. Car yellow -> Car green
- Updates the `changeTime` variable to mark the time of the last light change.

### Usage

1. Set up the circuit according to the provided circuit diagram or adapt it to your components.
2. Upload this Arduino sketch to your Arduino board using the Arduino IDE.
3. Open the Serial Monitor to view debugging information (optional).
4. Press the push-button switch to trigger the traffic light sequence.
5. Observe the traffic lights' behaviour for both cars and pedestrians.

### Contributing

If you have any suggestions or improvements for this project, please feel free to open an issue or create a pull request.


## Experiment 5 LED Brightness (Fading) Control with Potentiometer

This Arduino Uno program demonstrates how to adjust the brightness (fading) of two LEDs using a potentiometer. It reads analog values from two potentiometers connected to analog pins A0 and A1, maps those values to control the brightness of four LEDs connected to digital pins 10, 9, 6, and 5. The LEDs will fade in and out based on the position of the potentiometers.

### Prerequisites

Before you begin, ensure you have the following hardware components:

- Arduino Uno board
- Two potentiometers
- Four LEDs
- Resistors (for LED current limiting)
- Breadboard and jumper wires

### Circuit Diagram

![Circuit Diagram](https://github.com/Princepm02/Internet_of_Things/assets/91951172/5da49af1-2c3f-437c-865e-a9e8d0db8075)

### Installation

1. Connect the components as shown in the circuit diagram:
   - Connect the center terminal of the first potentiometer to A0 on the Arduino.
   - Connect one of the outer terminals of the first potentiometer to 5V on the Arduino.
   - Connect the other outer terminal of the first potentiometer to GND on the Arduino.
   - Connect the center terminal of the second potentiometer to A1 on the Arduino.
   - Connect one of the outer terminals of the second potentiometer to 5V on the Arduino.
   - Connect the other outer terminal of the second potentiometer to GND on the Arduino.
   - Connect the anodes (longer leads) of the LEDs to digital pins 10 and 9 on the Arduino through current-limiting resistors.
   - Connect the cathodes (shorter leads) of the LEDs to GND on the Arduino.
   - Connect the anodes (longer leads) of the LEDs to digital pins 6 and 5 on the Arduino through current-limiting resistors.
   - Connect the cathodes (shorter leads) of the LEDs to GND on the Arduino.
   
2. Upload the "Brightness.ino" sketch to your Arduino Uno using the Arduino IDE.

3. Open the Serial Monitor at a baud rate of 9600 to see the sensor readings and LED output values.

### Usage

1. Turn the potentiometer connected to A0 to adjust the brightness of the LEDs connected to pins 10 and 9.

2. Turn the potentiometer connected to A1 to adjust the brightness of the LEDs connected to pins 6 and 5.

3. Observe the analog sensor values and LED output values displayed in the Serial Monitor.

  ## Experiment 6 LED Brightness Control without Potentiometer

This Arduino Uno project demonstrates how to control the brightness of an LED without using a potentiometer. It uses pulse-width modulation (PWM) to smoothly increase and decrease the LED's brightness.

### Prerequisites

Before you begin, make sure you have the following components and software installed:

- Arduino Uno board
- An LED
- Jumper wire
- A current-limiting resistor (usually around 220-330 ohms)
- Arduino IDE (Integrated Development Environment) installed on your computer
- USB cable to connect your Arduino board to your computer

### Circuit Diagram

![Circuit Diagram](https://github.com/Princepm02/Internet_of_Things/assets/91951172/d56627f8-aa7f-43b8-b2dc-03a9c83ae67f)

### Circuit Connection

Connect the components as follows:

1. Connect the long leg (anode) of the LED to digital pin 9 on the Arduino.

2. Connect the short leg (cathode) of the LED to the ground (GND) pin on the Arduino through the current-limiting resistor.

### Running the Program

1. Open the Arduino IDE on your computer.

2. Copy and paste the code from this repository into a new Arduino sketch.

3. Connect your Arduino Uno to your computer using a USB cable.

4. Select the correct board and port in the Arduino IDE (usually under the "Tools" menu).

5. Upload the sketch to your Arduino board by clicking the "Upload" button.

6. Open the Serial Monitor in the Arduino IDE to view the brightness values in real-time.

7. You should see the LED gradually increase and decrease in brightness in a smooth manner, with brightness values printed to the Serial Monitor.

$~~~~$

## Experiment 7 Controlling Servo Motor with Potentiometer

This Arduino code demonstrates how to control a servo motor using a potentiometer. The servo motor's position is adjusted based on the analog reading from the potentiometer, allowing you to control the servo's angle manually.

### Prerequisites

Before you begin, make sure you have the following:

- An Arduino board (e.g., Arduino Uno)
- A servo motor
- A potentiometer
- Jumper wires
- Arduino IDE installed on your computer

### Circuit Connections

![Circuit Diagram](https://github.com/Princepm02/Internet_of_Things/assets/91951172/57648531-e96b-4533-b328-c269c6a783b3)

### Connect the components as follows:

- Connect the servo motor's signal (blue wire) to digital pin 9 on the Arduino.
- Connect the servo motor's power (red wire) to the 5V output on the Arduino.
- Connect the servo motor's ground (black wire) to the ground (GND) on the Arduino.
- Connect one end of the potentiometer to 5V on the Arduino.
- Connect the other end of the potentiometer to GND on the Arduino.
- Connect the potentiometer's wiper (middle pin) to analog pin 0 (A0) on the Arduino.

### Usage

1. Open the Arduino IDE on your computer.
2. Copy and paste the provided code into a new Arduino sketch.
3. Make sure your Arduino board is selected under the "Tools" menu.
4. Upload the code to your Arduino board.
5. Once the code is uploaded successfully, open the Serial Monitor to see the servo motor's position values.
6. Turn the potentiometer knob, and you should observe the servo motor moving in response to the potentiometer's position.

### Code Explanation

- The `Servo` library is used to control the servo motor.
- An instance of the `Servo` class, named `myservo`, is created.
- The potentiometer's input is read from analog pin 0 (A0).
- The analog reading is mapped to a range from 0 to 180 degrees (the typical range for servo motors).
- The `myservo.write(output)` function is used to set the servo motor's angle.
- A delay of 100 milliseconds is added between servo motor position updates to prevent rapid and jittery movements.

### Customization

- You can adjust the servo motor's control pin by changing the `myservo.attach(9)` line to use a different digital pin (3, 5, 6, 9, 10, or 11).
- Modify the `delay(100)` value to change the delay between servo position updates, controlling the servo's speed.


Feel free to reach out with any questions or issues related to this code. Happy experimenting!

 <b>THE END</b>
  </div>
  
$~~~$


