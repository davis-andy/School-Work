/*  Title: Unit 8 Program #1.2
 *  Purpose: Outputting a value to the Serial Monitor, mapped
 *  Author: Andy Davis
 *  Date: 4/30/2021
 *  VR1 connected to A0
 */
 
#include "Stemtera_io.h"

int potVal;


void setup() {
  Serial.begin(9600);
}

void loop() {
  potVal = map(analogRead(VR1),0,1023,0,100);
  Serial.println(potVal);  //Output the raw value to the screen
  delay(100);
}
