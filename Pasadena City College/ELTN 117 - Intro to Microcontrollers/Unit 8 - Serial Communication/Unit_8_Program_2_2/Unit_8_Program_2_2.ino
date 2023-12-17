/*  Title: Unit 8 Program #2.2
 *  Purpose: Flash LED on or off depending on input
 *  Author: Andy Davis
 *  Date: 4/30/2021
 *  LED1 connected to D2
 *  LED2 connected to D3
 */
 
#include "Stemtera_io.h"

char charIn;


void setup() {
  Serial.begin(9600);
  Serial.println("LED controller V1.0");
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Serial.println("Enter 'T' to flash LED2 or 'F' to flash LED1");  //Prompt for input
}

void flash(int led, int times){
  for(int i = 0; i < times; i++){
    digitalWrite(led, !digitalRead(led));
    delay(100);
    digitalWrite(led, !digitalRead(led));
    delay(100);
  }
}

void loop() {
  if(Serial.available() > 0){  //Wait for input...
    charIn = Serial.read();
    if(charIn == 'T'){
      flash(LED2, 5);
    }
    else if(charIn == 'F'){
      flash(LED1, 3);
    }
  }
}
