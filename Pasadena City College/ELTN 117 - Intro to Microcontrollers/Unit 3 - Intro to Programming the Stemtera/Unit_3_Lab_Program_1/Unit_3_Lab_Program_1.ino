/*  Title: Unit 3 Lab Program #1
 *  Purpose: Flash the LED on the Stemtera Board
 *  Author: Andy Davis
 *  Date: 3/28/2021
 *  Stemtera LED 'L' connected to pin D13
 */

const int boardL = 13;

void setup() {
  pinMode(boardL, OUTPUT);
}

void loop() {
  digitalWrite(boardL, HIGH);
  delay(10000);
  digitalWrite(boardL, LOW);
  delay(10000);
}
