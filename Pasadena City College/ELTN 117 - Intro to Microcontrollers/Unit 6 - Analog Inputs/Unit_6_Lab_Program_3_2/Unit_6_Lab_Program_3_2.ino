/*  Title: Unit 6 Program #3.2
 *  Purpose: Change the flash rate depending on LDR1 value
 *  Author: Andy Davis
 *  Date: 4/21/2021
 *  LED1 connected to D2
 *  LDR1 connected to A2
 */

const int LED1 = 2;
int analogValue;
const int slow = 500;
const int fast = 50;

void setup() {
  pinMode(LED1,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  analogValue = analogRead(A2);
  Serial.println(analogValue);
  if(analogValue >= 600){
    digitalWrite(LED1, HIGH);
    delay(fast);
    digitalWrite(LED1, LOW);
    delay(fast);
  }
  else{
    digitalWrite(LED1, HIGH);
    delay(slow);
    digitalWrite(LED1, LOW);
    delay(slow);
  }
  
}
