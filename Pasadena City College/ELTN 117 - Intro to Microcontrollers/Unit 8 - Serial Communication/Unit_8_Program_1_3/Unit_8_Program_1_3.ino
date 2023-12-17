/*  Title: Unit 8 Program #1.3
 *  Purpose: Outputting a value to the Serial Monitor, tabbed
 *  Author: Andy Davis
 *  Date: 4/30/2021
 *  VR1 connected to A0
 */
 
#include "Stemtera_io.h"

int potVal;
int scaleVal;


void setup() {
  Serial.begin(9600);
}

void loop() {
  potVal = analogRead(VR1);
  scaleVal = map(analogRead(VR1),0,1023,0,100);
  Serial.print(potVal);
  Serial.print("\t");
  Serial.println(scaleVal);  //Output the raw value to the screen
  delay(100);
}
