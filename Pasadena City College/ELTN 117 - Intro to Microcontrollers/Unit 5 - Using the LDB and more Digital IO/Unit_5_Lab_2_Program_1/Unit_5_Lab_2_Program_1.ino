/*  Title: Unit 5 Lab 2 Program #1
 *  Purpose: Turn on LED1 when both buttons are pressed, LED2 if one is pressed, otherwise off
 *  Author: Andy Davis
 *  Date: 4/9/2021
 *  LED1 connected to pin D2
 *  LED2 connected to pin D3
 *  Switch1 connected to pin D6
 *  Switch2 connected to pin D7
 */

const int led1 = 2;
const int led2 = 3;
const int sw1 = 6;
const int sw2 = 7;
int swVal1;
int swVal2;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(sw1, INPUT_PULLUP);  //5V or HIGH
  pinMode(sw2, INPUT_PULLUP);  //5V or HIGH
}

void loop() {
  swVal1 = digitalRead(sw1);
  swVal2 = digitalRead(sw2);
  
  while (!swVal1 || !swVal2){
    delay(150);
    digitalWrite(led2, HIGH);
    swVal1 = digitalRead(sw1);
    swVal2 = digitalRead(sw2);
    if(!swVal1 && !swVal2){
      digitalWrite(led2, LOW);
      break;
    }
  }
  
  while (!swVal1 && !swVal2){
    digitalWrite(led1, HIGH);
    swVal1 = digitalRead(sw1);
    swVal2 = digitalRead(sw2);
  }
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
}
