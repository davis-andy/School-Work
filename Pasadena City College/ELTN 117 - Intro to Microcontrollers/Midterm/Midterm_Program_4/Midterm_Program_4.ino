/*  Title: Midterm Program #4
 *  Purpose: Flash 3 LEDs using for loops
 *  Author: Andy Davis
 *  Date: 5/8/2021
 *  LED1 connected to D2
 *  LED2 connected to D3
 *  LED3 connected to D4
 */

#include "Stemtera_io.h"

int fast = 100;
int medium = 200;
int slow = 500;

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
}

void loop() {
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
  }
}
