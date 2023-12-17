/*  Title: Unit 6 Program #1.1
 *  Purpose: Use logical operators with analog inputs
 *  Author: Andy Davis
 *  Date: 4/21/2021
 *  LED1 connected to D2
 *  VR1 connected to A0
 */

int analogValue;
const int LED1 = 2;

void setup() {
  pinMode(LED1,OUTPUT);
}

void loop() {
  analogValue = analogRead(A0); // Variable Resistor (VR1)
  if (analogValue < 500){
    digitalWrite(LED1, HIGH);
  }
  else{
    digitalWrite(LED1, LOW);
  }
}
