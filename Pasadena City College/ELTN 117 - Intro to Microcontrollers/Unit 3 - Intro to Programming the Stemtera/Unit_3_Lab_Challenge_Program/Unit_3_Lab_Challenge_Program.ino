/*  Title: Unit 3 Lab Challenge Program
 *  Purpose: Alternate flashing between two LED 3 times, then turn both off for 1 second
 *  Author: Andy Davis
 *  Date: 3/28/2021
 *  Green LED connected to pin D4
 *  Red LED connected to pin D5
 */

const int greenLED = 4;
const int redLED = 5;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {
  digitalWrite(greenLED, HIGH);
  delay(250);
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, HIGH);
  delay(250);
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, HIGH);
  delay(250);
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, HIGH);
  delay(250);
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, HIGH);
  delay(250);
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, HIGH);
  delay(250);
  digitalWrite(redLED, LOW);
  delay(1000);
}
