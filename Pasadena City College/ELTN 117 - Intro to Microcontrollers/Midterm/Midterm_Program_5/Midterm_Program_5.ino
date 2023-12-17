/*  Title: Midterm Program #5
 *  Purpose: Flash 3 LEDs using for loops, either on or off when a switch is pressed
 *  Author: Andy Davis
 *  Date: 5/8/2021
 *  LED1 connected to D2
 *  LED2 connected to D3
 *  LED3 connected to D4
 *  S2 connected to D7
 */

#include "Stemtera_io.h"

int fast = 100;
int medium = 200;
int slow = 500;
int swVal = 0;

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(S2,INPUT_PULLUP);
}

void loop() {
  while(swVal == 1){
    if(!digitalRead(S2)){
      debounce(S2);
      swVal = 0;
    }
    int times = 5;
    for(int i = 2; i < 5; i++){
      if(i == 2){
        flashLED(i, fast, times);
      }
      if(i == 3){
        flashLED(i, medium, times);
      }
      if(i == 4){
        flashLED(i, slow, times);
      }
      times--;
      if(!digitalRead(S2)){
        debounce(S2);
        swVal = 0;
        break;
      }
    }
  }
  while(swVal == 0){
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    if(!digitalRead(S2)){
      debounce(S2);
      swVal = 1;
    }
  }
}
