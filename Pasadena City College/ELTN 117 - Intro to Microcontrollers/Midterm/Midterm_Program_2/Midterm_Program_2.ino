/*  Title: Midterm Program #2
 *  Purpose: Flash an LED while a switch is pressed
 *  Author: Andy Davis
 *  Date: 5/8/2021
 *  LED1 connected to D2
 *  S1 connected to D6
 */

#include "Stemtera_io.h"

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(S1, INPUT_PULLUP);
}

void loop() {
  while(!digitalRead(S1)){
    flashLED(LED1, 250, 0);
  }
  digitalWrite(LED1, LOW);
}
