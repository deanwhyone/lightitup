/*
 * created january 14 2019 for BUILD18 Light it Up with Bridget Tan, Bobby Li, and Eric Chen
 * author: Deanyone Su
 */

#include "FastLED.h"
#include "SPI.h"
#define LED_TYPE APA102
#define COLOR_ORDER RGB
#define NUM_PIXELS 125
CRGB leds[NUM_PIXELS];
 
// constants
  // pin 11: Master Out Slave In
  // pin 13: Serial Clock
#define DATA_PIN 11
#define CLOCK_PIN 13
  
void setup() {
  // tell FastLED that there are NUM_PIXEL DotStar LEDS on DATA_PIN
  FastLED.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_PIXELS);

  // default brightness
  FastLED.setBrightness(96);
}

void loop() {
  // put your main code here, to run repeatedly:

}
