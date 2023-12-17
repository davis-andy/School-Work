/*  Title: Unit 4 Lab Program #4
 *  Purpose: Flash an LED at difference rates depending on 
 *           what button is pressed
 *  Author: Andy Davis
 *  Date: 4/3/2021
 *  Green LED connected to pin D2
 *  Push button 1 connected to pin D8
 *  Push button 2 connected to pin D9
 */

const int greenLED = 2;
const int sw1 = 8;
const int sw2 = 9;
const int fast = 200;
const int slow = 500;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);
}

void loop() {
  digitalWrite(greenLED,LOW);
  
  while (!digitalRead(sw1)){
    digitalWrite(greenLED,HIGH);
    delay(fast);
    digitalWrite(greenLED,LOW);
    delay(fast);
  }
  while (!digitalRead(sw2)){
    digitalWrite(greenLED,HIGH);
    delay(slow);
    digitalWrite(greenLED,LOW);
    delay(slow);
  }
}
