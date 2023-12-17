/*  Title: Unit 9 Program #1.1
 *  Purpose: Sequences LEDs on and off using an array
 *  Author: Andy Davis
 *  Date: 5/7/2021
 *  LED1 connected to D2
 *  LED2 connected to D3
 *  LED3 connected to D4
 *  LED4 connected to D5
 *  VR1 connected to A0
 */

const int LED1 = 2;      // Assign names for pin #'s
const int LED2 = 3;
const int LED3 = 4;
const int LED4 = 5;
const int VR1 = A0;

int ledNum[4] = {2,3,4,5};  // Create an array.  For example, ledNum[0] = 2 
int mapVal;

void setup()
{
  Serial.begin(9600);
  pinMode (LED1, OUTPUT); // Define pins as outputs
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
  pinMode (LED4, OUTPUT);
  Serial.print("Index");
  Serial.print("\t");
  Serial.println("ledNum[index]");
  Serial.println("");
}

void loop()
{
  mapVal = map(analogRead(VR1),0,1023,250,50);
  for (int index = 0; index <4; index++)
  { 
     digitalWrite (ledNum[index], HIGH);  // Sequence LED's on
     delay(mapVal);
     Serial.print(index);
     Serial.print("\t");
     Serial.println(ledNum[index]); 
  }
  for (int index = 0; index <4; index++)
  { 
     digitalWrite (ledNum[index], LOW);  // Sequence LED's off
     delay(mapVal);
     Serial.print(index);
     Serial.print("\t");
     Serial.println(ledNum[index]);
  }
  Serial.println("");
}
