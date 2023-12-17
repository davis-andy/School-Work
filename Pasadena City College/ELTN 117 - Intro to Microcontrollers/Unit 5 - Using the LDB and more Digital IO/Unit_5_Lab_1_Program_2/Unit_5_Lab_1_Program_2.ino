/*  Title: Unit 5 Lab 1 Program #2
 *  Purpose: Automate a sequence of 4 LEDs that sequnce up on a button press
 *  Author: Andy Davis
 *  Date: 4/7/2021
 *  LED1 connected to pin D2
 *  LED2 connected to pin D3
 *  LED3 connected to pin D4
 *  LED4 connected to pin D5
 *  Switch1 connected to pin D6
 */

const int up = 6;
int ledPin = 2;
int switchVal;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(up, INPUT_PULLUP);  //5V or HIGH
}

void loop() {
  switchVal = digitalRead(up);
  while (switchVal == HIGH){
    delay(150);
    switchVal = digitalRead(up);
  }
  while (switchVal == LOW){
    if (ledPin == 6){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
    }
    else{
      digitalWrite(ledPin, HIGH);
    }
    switchVal = digitalRead(up);
  }
  if (ledPin == 6){
    ledPin = 2;
  }
  else{
    ledPin++;
  }
}
