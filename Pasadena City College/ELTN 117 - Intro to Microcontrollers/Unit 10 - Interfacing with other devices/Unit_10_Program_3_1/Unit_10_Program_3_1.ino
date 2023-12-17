/*  Title: Unit 10 Program #3.1
 *  Purpose: Bounce lights on an LED strip, changing the color randomly each bounce, beeping at each end, and LDR changing the speed
 *  Author: Andy Davis
 *  Date: 5/14/2021
 */

#include "Stemtera_io.h"
#include <Adafruit_NeoPixel.h>
#define N_LEDS 10
 
Adafruit_NeoPixel strip = Adafruit_NeoPixel(N_LEDS, Neo, NEO_GRB + NEO_KHZ800);
int randRed;
int randBlue;
int randGreen;


void setup() 
{
  strip.begin();
  strip.show();
  pinMode(BZ1, OUTPUT);
  Serial.begin(9600);
}

void loop() 

{
  int ldrVal = ldrRead();
  Serial.println(ldrVal);
  bounceUp(ldrVal);
  bounceDown(ldrVal);
}
 
static void bounceUp(int rate) {
  randRed = random(0,255);
  randBlue = random(0,255);
  randGreen = random(0,255);
  for(uint16_t i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, randRed, randBlue, randGreen); // Draw new pixel
      strip.setPixelColor(i-1, 0); // Erase pixel a few steps back
      strip.show();
      delay(rate);
  }
  //tone(BZ1, 500, 200);
  digitalWrite(BZ1, HIGH);
  delay(200);
  digitalWrite(BZ1, LOW);
}

static void bounceDown(int rate) {
  randRed = random(0,255);
  randBlue = random(0,255);
  randGreen = random(0,255);
  for(uint16_t i=strip.numPixels()-1; i>0; i--) {
      strip.setPixelColor(i, randRed, randBlue, randGreen); // Draw new pixel
      strip.setPixelColor(i+1, 0); // Erase pixel a few steps back
      strip.show();
      delay(rate);
  }
  strip.setPixelColor(0, randRed, randBlue, randGreen); // Draw new pixel
  strip.setPixelColor(1, 0); // Erase pixel a few steps back
  strip.show();
  delay(rate);
  //tone(BZ1, 500, 200);
  digitalWrite(BZ1, HIGH);
  delay(200);
  digitalWrite(BZ1, LOW);
}

int ldrRead(){
  int ldrVal = map(analogRead(LDR1),-200,1000,500,50);
  return ldrVal;
}
