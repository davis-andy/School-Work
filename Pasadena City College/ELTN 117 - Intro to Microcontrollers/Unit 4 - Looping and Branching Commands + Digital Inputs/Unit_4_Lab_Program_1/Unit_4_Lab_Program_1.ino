/*  Title: Unit 4 Lab Program #1
 *  Purpose: Turn on or off LED while a button is pressed
 *  Author: Andy Davis
 *  Date: 4/3/2021
 *  Green LED connected to pin D2
 *  Push button connected to pin D8
 */

const int greenLED = 2;
const int sw1 = 8;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(sw1, INPUT_PULLUP);
}

void loop() {
  if (!digitalRead(sw1)){
    digitalWrite(greenLED,sw1);
  }
  else {
    digitalWrite(greenLED,LOW);
  }
}
