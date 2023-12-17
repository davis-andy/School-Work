/*  Title: Unit 6 Program #1.2
 *  Purpose: Light different LEDs based on the knob position
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

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
}

void loop() {
  analogValue = analogRead(A0); // Variable Resistor (VR1)
  if (analogValue <= 350){
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
  }
  else if (analogValue > 350 && analogValue < 700){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, LOW);
  }
  else if (analogValue >= 700){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
  }
}
