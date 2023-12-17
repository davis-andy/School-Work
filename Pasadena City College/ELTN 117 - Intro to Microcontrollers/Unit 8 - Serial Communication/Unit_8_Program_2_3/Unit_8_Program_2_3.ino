/*  Title: Unit 8 Program #2.3
 *  Purpose: Flash LED number of times depending on input
 *  Author: Andy Davis
 *  Date: 4/30/2021
 *  LED1 connected to D2
 */
 
#include "Stemtera_io.h"

int intIn;


void setup() {
  Serial.begin(9600);
  Serial.println("LED controller V1.0");
  pinMode(LED1, OUTPUT);
  Serial.println("Enter how many number of times to flash LED");  //Prompt for input
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
    intIn = Serial.parseInt();
    flash(LED1, intIn);
  }
}
