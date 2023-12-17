/*  Title: Unit 10 Program #1.1
 *  Purpose: Play a melody when a switch is pressed
 *  Author: Andy Davis
 *  Date: 5/14/2021
 */

#include "Stemtera_io.h"

int melody[] = {
  NOTE_D4,NOTE_D4,NOTE_D4,NOTE_G4,NOTE_D5,NOTE_C5,NOTE_B4,NOTE_A4,
  NOTE_G5,NOTE_D5,NOTE_C5,NOTE_B4,NOTE_A4,NOTE_G5,NOTE_D5,NOTE_C5,
  NOTE_B4,NOTE_C5,NOTE_A4
};

int noteDuration[] = {
  8,8,8,2,2,8,8,8,2,2,8,8,8,2,2,8,8,8,1
};

void setup(){
  pinMode(S1, INPUT_PULLUP);
}

void loop(){
  if(!digitalRead(S1)){
    for(int note = 0; note < sizeof(melody)/sizeof(int); note++){
      int duration = 1000/noteDuration[note];
      tone(SPKR, melody[note], duration);
      delay(duration+30);
    }
  }
}
