/*  Title: Unit 3 Lab Program #5
 *  Purpose: Automate a sequence of 4 LEDs
 *  Author: Andy Davis
 *  Date: 3/28/2021
 *  Green LED connected to pin D3
 *  Yellow LED connected to pin D4
 *  Red LED connected to pin D5
 *  Blue LED connected to pin D6
 */

const int greenLED = 3;
const int yellowLED = 4;
const int redLED = 5;
const int blueLED = 6;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void loop() {
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, LOW);
  digitalWrite(blueLED, LOW);
  delay(500);
  digitalWrite(greenLED, HIGH);
  delay(500);
  digitalWrite(yellowLED, HIGH);
  delay(500);
  digitalWrite(redLED, HIGH);
  delay(500);  
  digitalWrite(blueLED, HIGH);
  delay(500);
}
