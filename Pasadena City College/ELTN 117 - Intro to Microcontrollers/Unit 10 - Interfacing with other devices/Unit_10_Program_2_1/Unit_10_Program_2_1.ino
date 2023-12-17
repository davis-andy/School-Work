/*  Title: Unit 10 Program #2.1
 *  Purpose: Bounce lights on an LED strip
 *  Author: Andy Davis
 *  Date: 5/14/2021
 */

#include "Stemtera_io.h"
#include <Adafruit_NeoPixel.h>
#define N_LEDS 10
 
Adafruit_NeoPixel strip = Adafruit_NeoPixel(N_LEDS, Neo, NEO_GRB + NEO_KHZ800);
 
void setup() 
{
  strip.begin();
  strip.show();
}

void loop() 

{
  //bounce(strip.Color(64, 30, 0)); // Yellow
  bounce(strip.Color(0, 5, 10));  // Aqua
  //bounce(strip.Color(32, 0, 52)); // Purple
}
 
static void bounce(uint32_t c) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, c); // Draw new pixel
      strip.setPixelColor(i-1, 0); // Erase pixel a few steps back
      strip.show();
      delay(50);
  }
  for(uint16_t i=strip.numPixels()-1; i>0; i--) {
      strip.setPixelColor(i, c); // Draw new pixel
      strip.setPixelColor(i+1, 0); // Erase pixel a few steps back
      strip.show();
      delay(50);
  }
}
