/*  Title: Unit 5 Lab 1 Program #3
 *  Purpose: Automate a sequence of 4 LEDs that sequence up or down on a button press
 *  Author: Andy Davis
 *  Date: 4/7/2021
 *  LED1 connected to pin D2
 *  LED2 connected to pin D3
 *  LED3 connected to pin D4
 *  LED4 connected to pin D5
 *  Switch1 connected to pin D6
 *  Switch2 connected to pin D7
 */

const int up = 6;
const int down = 7;
int ledPin = 1;
int ledPrevious = 0;
int switchVal1;
int switchVal2;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(up, INPUT_PULLUP);  //5V or HIGH
  pinMode(down, INPUT_PULLUP);  //5V or HIGH
}

void loop() {
  switchVal1 = digitalRead(up);
  switchVal2 = digitalRead(down);
  while (switchVal1 && switchVal2 == HIGH){
    delay(150);
    switchVal1 = digitalRead(up);
    switchVal2 = digitalRead(down);
  }


  if (!switchVal1){
    delay(150);
    if (ledPin < 5 && ledPin > ledPrevious){
      ledPrevious = ledPin;
      ledPin++;
      digitalWrite(ledPin, HIGH);
      if (ledPin == 5){
        ledPrevious = 6;
      }
    }
  }

  if (!switchVal2){
    delay(150);
    if (ledPin > 1 && ledPin < ledPrevious){
      digitalWrite(ledPin, LOW);
      ledPrevious = ledPin;
      ledPin--;
      if (ledPin == 1){
        ledPrevious = 0;
      }
    }
  }
}
