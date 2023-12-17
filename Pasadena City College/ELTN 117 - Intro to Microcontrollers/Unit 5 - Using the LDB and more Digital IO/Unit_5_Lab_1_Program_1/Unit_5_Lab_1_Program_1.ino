/*  Title: Unit 5 Lab 1 Program #1
 *  Purpose: Automate a sequence of 4 LEDs that change speed on a button press
 *  Author: Andy Davis
 *  Date: 4/7/2021
 *  LED1 connected to pin D2
 *  LED2 connected to pin D3
 *  LED3 connected to pin D4
 *  LED4 connected to pin D5
 *  Switch1 connected to pin D6
 */

const int d2 = 2;
const int d3 = 3;
const int d4 = 4;
const int d5 = 5;
const int s1 = 6;
const int normal = 500;
const int fast = 250;

void setup() {
  pinMode(d2, OUTPUT);
  pinMode(d3, OUTPUT);
  pinMode(d4, OUTPUT);
  pinMode(d5, OUTPUT);
  pinMode(s1, INPUT_PULLUP);  //5V or HIGH
}

void sequence(int rate){
  digitalWrite(d2, LOW);
  digitalWrite(d3, LOW);
  digitalWrite(d4, LOW);
  digitalWrite(d5, LOW);
  delay(rate);
  digitalWrite(d2, HIGH);
  delay(rate);
  digitalWrite(d3, HIGH);
  delay(rate);
  digitalWrite(d4, HIGH);
  delay(rate);  
  digitalWrite(d5, HIGH);
  delay(rate);
}

void loop() {
  while(!digitalRead(s1)){
    sequence(fast);
  }
  sequence(normal);
}
