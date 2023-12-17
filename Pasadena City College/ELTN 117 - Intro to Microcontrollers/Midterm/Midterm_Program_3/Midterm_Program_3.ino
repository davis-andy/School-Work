/*  Title: Midterm Program #3
 *  Purpose: Flash an LED while a switch is pressed and potentiometer varies the speed
 *  Author: Andy Davis
 *  Date: 5/8/2021
 *  LED1 connected to D2
 *  S1 connected to D6
 *  VR1 connected to A0
 */

#include "Stemtera_io.h"

int flashRate;

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(S1, INPUT_PULLUP);
}

void loop() {
  while(!digitalRead(S1)){
    flashRate = map(analogRead(VR1),0,1023,250,50);
    flashLED(LED1, flashRate, 0);
  }
  digitalWrite(LED1, LOW);
}
