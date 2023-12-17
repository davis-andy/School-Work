/*  Title: Unit 3 Lab Program #2
 *  Purpose: Flash a single green LED
 *  Author: Andy Davis
 *  Date: 3/28/2021
 *  Green LED connected to pin D4
 */

const int greenLED = 4;

void setup() {
  pinMode(greenLED, OUTPUT);
}

void loop() {
  digitalWrite(greenLED, HIGH);
  delay(250);
  digitalWrite(greenLED, LOW);
  delay(250);
}
