/*  Title: Unit 6 Challenge Program
 *  Purpose: Create a programmable light dimmer
 *  Author: Andy Davis
 *  Date: 4/21/2021
 *  LED2 connected to D3
 *  VR1 connected to A0
 *  SW1 connected to D6
 *  SW2 connected to D7
 *  SW3 connected to D8
 *  SW5 connected to D10
 */

const int LED2 = 3;
const int SW1 = 6;
const int SW2 = 7;
const int SW3 = 8;
const int Slide = 10;
int setting1;
int setting2;
int setting3;
int analogValue;
int newVal;

void setup() {
  pinMode(~LED2,OUTPUT);
  pinMode(SW1,INPUT_PULLUP);
  pinMode(SW2,INPUT_PULLUP);
  pinMode(SW3,INPUT_PULLUP);
  pinMode(Slide,INPUT_PULLUP);
}

void loop() {
  while(digitalRead(Slide) == 0){  // Program button settings
    analogValue = analogRead(A0);
    newVal = map(analogValue,0,1023,0,255);
    analogWrite(LED2, newVal);
    if(!digitalRead(SW1)){
      setting1 = newVal;
    }
    if(!digitalRead(SW2)){
      setting2 = newVal;
    }
    if(!digitalRead(SW3)){
      setting3 = newVal;
    }
  }

  while(digitalRead(Slide) == 1){  // Run button settings
    if(!digitalRead(SW1)){
      analogWrite(LED2,setting1);
    }
    if(!digitalRead(SW2)){
      analogWrite(LED2,setting2);
    }
    if(!digitalRead(SW3)){
      analogWrite(LED2,setting3);
    }
  }
  
}
