/*  Title: Unit 6 Program #2.3
 *  Purpose: Reads VR1 and copies the value to LED2, using map
 *  Author: Andy Davis
 *  Date: 4/21/2021
 *  LED2 connected to D3
 *  VR1 connected to A0
 */

const int LED2 = 3;
int newVal;
int analogValue;

void setup() {
  pinMode(~LED2,OUTPUT);
}

void loop() {
  analogValue = analogRead(A0);
  newVal = map(analogValue,0,1023,0,255);
  analogWrite(LED2, newVal);
}
