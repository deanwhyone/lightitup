/*
 * created january 14 2019 for BUILD18 Light it Up with Bridget Tan, Bobby Li, and Eric Chen
 * author: Deanyone Su
 */

#include <FastLED.h>
#include <Adafruit_DotStar.h>
#include <SPI.h>
#define NUMPIXELS 125
 
// constants
  // pin 11: Master Out Slave In
  // pin 13: Serial Clock
#define DATAPIN 11
#define CLOCKPIN 13

Adafruit_DotStar strip = Adafruit_DotStar(
  NUMPIXELS, DOTSTAR_BRG);
  
void setup() {
  // put your setup code here, to run once:
  strip.begin();
  strip.show();
}

void loop() {
  // put your main code here, to run repeatedly:

}
