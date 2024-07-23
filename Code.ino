#include "74HC595LED.h"
void setup (){
initReg(2, 3, 4);
Serial.begin(9600);
} 
void loop(){ 
displayWrite("1234");
}
