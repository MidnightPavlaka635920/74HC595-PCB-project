# 74HC595 PCB project
**Note:** You need to bridge wire across one pin segment and on pin on the IC if you downloaded PCCB before November 16, or you just bridge **F segment on second display to F output on the second shift register (Third set on schematics)** 
## About
I postedd the Arduino 74HC595 library that you can use if you want. Now, I made an PCB for that library. You can go and download the PCBs Gerber, BOM and CSV.
Files for PCB are above, ready to download. This PCB opens more abilities, then using multiplex.
### HOW TO WIRE IT PROPERLY
EXT. PS: There you connect 5V and GND of an External power supply(I will be using Prototype board power supply). For the arduino, it's a bit easier: You connect GND to Arduino's GND; Input, Clock and latch pin you specify in the code.
### COMPONENTS
74HC595 IC x4; 7 segment display x4; 470 or 330 ohm resistor x4; Capacitor 50-100 uF x1; Headers (male or female): 2-pin and 4-pin headers; That is it!
### SOFTWARE
Arduino IDE 1.8 or newer.
### SKILLS
Soldering.
Download library from <a href="https://github.com/MidnightPavlaka635920/74HC595_Library">my library page</a>
This is an PCB schematic.
![Screenshot from 2024-07-22 10-21-34](https://github.com/user-attachments/assets/21818ffd-96aa-44ea-a858-018ac6ffe923)
This is an PCB with components:
![IMG_20241007_131746966](https://github.com/user-attachments/assets/2e85ade3-e14e-4cae-8e38-367d241fd512)
If you have some problem with library, download it from https://github.com/MidnightPavlaka635920/74HC595_Library.
November 12; 2024. --> Library update and Tested the PCB - It works! If you downloaded library before this day, redownload it!
<br>
## Code Example
Here is one example how to show numbers with my library:

```arduino
// Pin definitions for your 74HC595 shift registers
const int dataPina = 4;
const int clockPina = 3;
const int latchPina = 2;
#include "74HC595LED.h"
// Initialize the display by setting up pins
void setup() {
  initReg(latchPina, clockPina, dataPina);  // Initialize shift register pins
  clearDisplay();  // Clear the display initially
  delay(2000);
  displayShowNumbers("8888", "...."); // Print "8.8.8.8." on display: 8888: numbers to show; "....": add dots after all segments
}

// Main loop to display numbers on the 4-digit 7-segment display
void loop() {
}
