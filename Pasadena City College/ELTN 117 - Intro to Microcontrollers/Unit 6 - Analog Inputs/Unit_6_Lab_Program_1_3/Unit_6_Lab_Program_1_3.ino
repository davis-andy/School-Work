/*  Title: Unit 6 Program #1.3
 *  Purpose: Light different LEDs based on the knob position using map function
 *  Author: Andy Davis
 *  Date: 4/21/2021
 *  LED1 connected to D2
 *  LED2 connected to D3
 *  LED3 connected to D4
 *  VR1 connected to A0
 */

int analogValue;
const int LED1 = 2;
const int LED2 = 3;
const int LED3 = 4;
int newVal;

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
}

void loop() {
  analogValue = analogRead(A0); // Variable Resistor (VR1)
  newVal = map(analogValue,0,1023,1,10);
  if (newVal <= 3){
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
  }
  else if (newVal > 3 && newVal < 8){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, LOW);
  }
  else if (newVal >= 8){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
  }
}
