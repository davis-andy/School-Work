/*  Title: Unit 4 Lab Program #3
 *  Purpose: Flash an LED at difference rates when the button is pressed/released
 *  Author: Andy Davis
 *  Date: 4/3/2021
 *  Green LED connected to pin D2
 *  Push button connected to pin D8
 */

const int greenLED = 2;
const int sw1 = 8;
const int fast = 200;
const int slow = 500;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(sw1, INPUT_PULLUP);
}

void loop() {
  while (!digitalRead(sw1)){
    digitalWrite(greenLED,HIGH);
    delay(fast);
    digitalWrite(greenLED,LOW);
    delay(fast);
  }
  while (digitalRead(sw1)){
    digitalWrite(greenLED,HIGH);
    delay(slow);
    digitalWrite(greenLED,LOW);
    delay(slow);
  }
}
