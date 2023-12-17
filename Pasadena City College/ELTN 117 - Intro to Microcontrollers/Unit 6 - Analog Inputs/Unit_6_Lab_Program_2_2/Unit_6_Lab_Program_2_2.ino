/*  Title: Unit 6 Program #2.2
 *  Purpose: Reads VR1 and copies the value to LED2
 *  Author: Andy Davis
 *  Date: 4/21/2021
 *  LED2 connected to D3
 *  VR1 connected to A0
 */

const int LED2 = 3;
int analogValue;

void setup() {
  pinMode(~LED2,OUTPUT);
}

void loop() {
  analogValue = analogRead(A0);
  analogWrite(LED2, analogValue);
}
