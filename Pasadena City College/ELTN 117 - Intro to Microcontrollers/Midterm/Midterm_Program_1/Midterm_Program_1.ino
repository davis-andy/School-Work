/*  Title: Midterm Program #1
 *  Purpose: Flash an LED continuously
 *  Author: Andy Davis
 *  Date: 5/8/2021
 *  LED1 connected to D2
 */

#include "Stemtera_io.h"

void setup() {
  pinMode(LED1,OUTPUT);
}

void loop() {
  flashLED(LED1, 250, 0);
}
