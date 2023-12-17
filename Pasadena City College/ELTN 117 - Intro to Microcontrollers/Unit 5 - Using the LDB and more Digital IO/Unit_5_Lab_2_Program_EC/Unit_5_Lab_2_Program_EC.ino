/*  Title: Unit 5 Lab 2 Program #Extra
 *  Purpose: Flash all LEDs when all three buttons are pressed
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

void flashTriple(int led1, int led2, int led3, int rate, int times){
  for(int i = 0; i < times; i++){
    digitalWrite(led1, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led2, HIGH);
    delay(rate);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    delay(rate);
  }
}

void loop() {
  swVal1 = digitalRead(five);
  swVal2 = digitalRead(ten);
  swVal3 = digitalRead(fifteen);

  if (!swVal1 && !swVal2 && !swVal3){
    delay(150);
    flashTriple(led1, led2, led3, medium, flash10);
  }
  
  else if (!swVal1 && swVal2 && swVal3){
    delay(150);
    flashLED(led1, slow, flash5);
  }
  
  else if (!swVal2 && swVal1 && swVal3){
    delay(150);
    flashLED(led2, medium, flash10);
  }
  
  else if (!swVal3 && swVal2 && swVal1){
    delay(150);
    flashLED(led3, fast, flash15);
  }
}
