# Analog-and-Digital-Sensors
design and pregaming of  digital and along sensor
I design 3 sensor :-
# 1- PIR sensor (Digital sensor):
Passive Infrared sensor tht is an electronic device that detects motion by sensing infrared (IR) radiation emitted by objects, particularly warm bodies like humans and animals. It is widely used in motion detection systems, security alarms, automatic lighting, and various home automation projects.

Applications of PIR Sensors:
* Security Systems: Detect intruders and trigger alarms.
* Automatic Lighting: Turn lights on/off based on motion.
* Home Automation: Control appliances and devices based on presence detection.

Components in the Circuit:
* Arduino UNO – The microcontroller board that processes the PIR sensor's signals.
* PIR Sensor – Detects motion by sensing infrared radiation.
* LED – Lights up when motion is detected by the PIR sensor.
* Resistor (220Ω) – Limits the current flowing to the LED to prevent damage.
* Breadboard – Used to make the circuit connections easier.
* Wires – Connect various components to the Arduino and breadboard.

Connections :
* PIR Sensor Pins 🔴:
VCC (Power) → Connected to the 5V pin on Arduino.
GND (Ground) → Connected to the GND pin on Arduino.
OUT (Signal) → Connected to Digital Pin 2 on Arduino.
* LED Circuit💡:
Long leg (Anode) of the LED → Connected to Digital Pin 13 on Arduino through a 220Ω resistor.
Short leg (Cathode) of the LED → Connected to GND on the breadboard.

How the Circuit Works:
Power Supply:
The Arduino provides 5V power to the PIR sensor through its VCC pin and completes the circuit with GND.
PIR Sensor Operation:
The PIR sensor continuously monitors infrared radiation in its field of view.
When the PIR sensor detects motion (a change in infrared radiation), it sends a HIGH signal (3.3V) to Pin 2 on the Arduino.
When no motion is detected, the output remains LOW (0V).
Arduino Logic:
The Arduino code reads the PIR sensor's output.
If the sensor sends a HIGH signal (motion detected), the Arduino turns the LED ON.
If the output is LOW (no motion), the LED remains OFF.

Note: The Arduino code and design image have been uploaded along with the operation video
