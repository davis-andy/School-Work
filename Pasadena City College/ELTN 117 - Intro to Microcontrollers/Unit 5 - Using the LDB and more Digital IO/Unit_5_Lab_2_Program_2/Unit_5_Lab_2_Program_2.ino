/*  Title: Unit 5 Lab 2 Program #2
 *  Purpose: Flash an LED certain number of times depending on which button is pressed
 *  Author: Andy Davis
 *  Date: 4/9/2021
 *  LED1 connected to pin D2
 *  LED2 connected to pin D3
 *  LED3 connected to pin D4
 *  Switch1 connected to pin D6
 *  Switch2 connected to pin D7
 *  Switch3 connected to pin D8
 */

const int led1 = 2;
const int led2 = 3;
const int led3 = 4;

const int flash5 = 5;
const int flash10 = 10;
const int flash15 = 15;

const int fast = 100;
const int medium = 200;
const int slow = 300;

const int five = 6;
const int ten = 7;
const int fifteen = 8;

int swVal1;
int swVal2;
int swVal3;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(five, INPUT_PULLUP);  //5V or HIGH
  pinMode(ten, INPUT_PULLUP);  //5V or HIGH
  pinMode(fifteen, INPUT_PULLUP);  //5V or HIGH
}

void flashLED(int led, int rate, int times){
  for(int i = 0; i < times; i++){
    digitalWrite(led, HIGH);
    delay(rate);
    digitalWrite(led, LOW);
    delay(rate);
  }
}

void loop() {
  swVal1 = digitalRead(five);
  swVal2 = digitalRead(ten);
  swVal3 = digitalRead(fifteen);

  if (!swVal1){
    delay(150);
    flashLED(led1, slow, flash5);
  }
  
  if (!swVal2){
    delay(150);
    flashLED(led2, medium, flash10);
  }
  
  if (!swVal3){
    delay(150);
    flashLED(led3, fast, flash15);
  }
}
