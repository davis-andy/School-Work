/*  Title: Unit 8 Program #2.1
 *  Purpose: Turn LED on or off depending on input
 *  Author: Andy Davis
 *  Date: 4/30/2021
 *  LED1 connected to D2
 */
 
#include "Stemtera_io.h"

char charIn;


void setup() {
  Serial.begin(9600);
  Serial.println("LED controller V1.0");
  pinMode(LED1, OUTPUT);
  Serial.println("Enter 'T' to turn LED on of 'F' to turn LED off");  //Prompt for input
}

void loop() {
  if(Serial.available() > 0){  //Wait for input...
    charIn = Serial.read();
    if(charIn == 'T'){
      digitalWrite(LED1, HIGH);
      delay(500);
    }
    else if(charIn == 'F'){
      digitalWrite(LED1, LOW);
      delay(500);
    }
  }
}
