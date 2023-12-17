/*  Title: Unit 6 Program #2.1
 *  Purpose: Fade an LED in and out using PWM
 *  Author: Andy Davis
 *  Date: 4/21/2021
 *  LED2 connected to D3
 */

const int LED2 = 3;
int voltVal = 256;

void setup() {
  pinMode(~LED2,OUTPUT);
}

void loop() {
  for (int i = 0; i < voltVal; i++){
    analogWrite(LED2, i);
    delay(10);
  }
}
