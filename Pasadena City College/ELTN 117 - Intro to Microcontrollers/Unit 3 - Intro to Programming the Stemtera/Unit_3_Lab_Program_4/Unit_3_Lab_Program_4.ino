/*  Title: Unit 3 Lab Program #4
 *  Purpose: Simluate a traffic light
 *  Author: Andy Davis
 *  Date: 3/28/2021
 *  Green LED connected to pin D3
 *  Yellow LED connected to pin D4
 *  Red LED connected to pin D5
 */

const int greenLED = 3;
const int yellowLED = 4;
const int redLED = 5;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
}

void loop() {
  digitalWrite(greenLED, HIGH);
  delay(20000);
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, HIGH);
  delay(3000);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, HIGH);
  delay(10000);
  digitalWrite(redLED, LOW);
}
