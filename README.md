I postedd the Arduino 74HC595 library that you can use if you want. It's only problem is that it doesn't support DP. Now, I am making an PCB for that library. You can go and download the PCBs Gerber, BOM and CSV.
Files for PCB are above, ready to download. This PCB opens more abilities, then using multiplex. HOW TO WIRE IT PROPERLY: EXT. PS: There you connect 5V and GND of an External power supply(I will be using Prototype board power supply). For the arduino, it's a bit easier: You connect GND to Arduino's GND; Input, Clock and latch pin you specify in the code.
This is an PCB schematic.
![Screenshot from 2024-07-22 10-21-34](https://github.com/user-attachments/assets/21818ffd-96aa-44ea-a858-018ac6ffe923)
This is an PCB with components:
![IMG_20241007_131746966](https://github.com/user-attachments/assets/2e85ade3-e14e-4cae-8e38-367d241fd512)
Evrything that you need is:
4x 7 Segment display;
4x 74HC595 IC;
4x 330 Ohm Resistors;
1 Electrolyric capacitor 40uF, and
some headers.
Code that should print on displays "1234":
 Code1234.ino


  If you have some problem with library, download it from https://github.com/MidnightPavlaka635920/74HC595_Library.
