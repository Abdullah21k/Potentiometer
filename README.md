##Purpose
This project demonstrates how to use a potentiometer with an Arduino to control the output voltage. By turning the knob of the potentiometer, you can adjust the voltage level read by the Arduino.

##Setup
* Connect the middle pin (wiper) of the potentiometer to an Arduino analog input pin (e.g., A0).
* Connect one of the side pins of the potentiometer to 5V on the Arduino.
* Connect the other side pin to GND.
* Use Arduino code to read the analog input and scale it to voltage.

##Usage
Rotate the potentiometer:

* Turning left decreases the output voltage.
* Turning right increases the output voltage.
* The Arduino measures the voltage (0–5 V) and you can print it to the Serial Monitor.

Example Output
* Voltage: 2.5 V
* Voltage: 2.6 V
* Voltage: 3.0 V
...
