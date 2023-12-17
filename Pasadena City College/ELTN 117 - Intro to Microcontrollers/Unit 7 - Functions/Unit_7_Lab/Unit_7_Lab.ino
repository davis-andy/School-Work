/*  Title: Unit 7 Program
 *  Purpose: Create a simple program that flashes an LED at two different “programmed” rates
 *           depending on the position of The Program Number Switch.
 *  Author: Andy Davis
 *  Date: 4/25/2021
 *  LED1 - Output LED
 *  LED4 - Mode LED
 *  VR1 - Speed control
 *  S5 - Mode switch, Up is Run, Down is Program
 *  S6 - Preset Switch, Up is 1, Down is 2
 *  S1 - Save button
 */

#include "Stemtera_io.h"

int preset1;
int preset2;
int program_run;

void setup() {
  pinMode(S1,INPUT_PULLUP);
  pinMode(S5,INPUT_PULLUP);
  pinMode(S6,INPUT_PULLUP);
  pinMode(LED1,OUTPUT);
  pinMode(LED4,OUTPUT);
}

void flashLED(int led, int rate){
  digitalWrite(led, !digitalRead(led));
  delay(rate);
  digitalWrite(led, !digitalRead(led));
  delay(rate);
}

void flashLEDlimited(int led, int rate, int repeat){
  for(int i = 0; i < repeat; i++){
    digitalWrite(led, !digitalRead(led));
    delay(rate);
    digitalWrite(led, !digitalRead(led));
    delay(rate);
  }
}

void modeSaved(){
  flashLEDlimited(LED4, 100, 3);
}

int readVR1(){
  int newVal = map(analogRead(VR1),0,1023,50,500);
  return newVal;
}

void runLED(int preset){
  flashLED(LED1, preset);
}

int runMode(){
  digitalWrite(LED4, LOW);

  //Preset 1
  while(digitalRead(S6) == 1){
    runLED(preset1);
    if(digitalRead(S5) != program_run){
      break;
    }
  }
  
  //Preset 2
  while(digitalRead(S6) == 0){
    runLED(preset2);
    if(digitalRead(S5) != program_run){
      break;
    }
  }
  
  return digitalRead(S5);
}

int programMode(){
  digitalWrite(LED4, HIGH);
   
  //Preset 1
  while(digitalRead(S6) == 1){
    flashLED(LED1, readVR1());
    if(!digitalRead(S1)){
      debounce(S1);
      preset1 = readVR1();
      modeSaved();
    }
    if(digitalRead(S5) != program_run){
      break;
    }
  }

  //Preset 2
  while(digitalRead(S6) == 0){
    flashLED(LED1, readVR1());
    if(!digitalRead(S1)){
      debounce(S1);
      preset2 = readVR1();
      modeSaved();
    }
    if(digitalRead(S5) != program_run){
      break;
    }
  }

  return digitalRead(S5);
}




void loop() {
  program_run = digitalRead(S5);
  
  //PROGRAM
  while(program_run == 0){
    program_run = programMode();
  }
  
  //RUN
  while(program_run == 1){
    program_run = runMode();
  }
}
