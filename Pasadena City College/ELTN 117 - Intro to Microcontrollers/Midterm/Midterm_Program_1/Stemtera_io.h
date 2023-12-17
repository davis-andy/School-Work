/*  Header file for the Stemtera IOs
 *  This is to be used with the helper board provided by Prof. Thoen
 */

//LEDs
const int LED1 = 2;
const int LED2 = 3;
const int LED3 = 4;
const int LED4 = 5;

//Push buttons
const int S1 = 6;
const int S2 = 7;
const int S3 = 8;
const int S4 = 9;

//Slide Switches
const int S5 = 10;
const int S6 = 11;

//Speaker
const int SPKR = 12;

//Neopixel Strip
const int NEO = 13;

//Potentiometers - Variable Resistors
const int VR1 = A0;
const int VR2 = A1;

//LDR
const int LDR1 = A2;

//Buzzer
const int BZ1 = A3;

//Debounce function
void debounce(int swtch){
  while(digitalRead(swtch))
  delay(25);
  while(!digitalRead(swtch))
  delay(50);
}

//Flash LED function
void flashLED(int led, int rate, int times){
  if(times == 0){
    digitalWrite(led, !digitalRead(led));
    delay(rate);
    digitalWrite(led, !digitalRead(led));
    delay(rate);
  }
  else{
    for(int i = 0; i < times; i++){
    digitalWrite(led, !digitalRead(led));
    delay(rate);
    digitalWrite(led, !digitalRead(led));
    delay(rate);
    }
  }
}
