/*
 * created january 14 2019 for BUILD18 Light it Up with Bridget Tan, Bobby Li, and Eric Chen
 * author: Deanyone Su
 */

#include "FastLED.h"
#include "SPI.h"
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioInputUSB            usb1;           //xy=202.1999969482422,173.1999969482422
AudioAnalyzeFFT256       fft256_1;       //xy=407.20001220703125,62.19999694824219
AudioConnection          patchCord1(usb1, 0, fft256_1, 0);
// GUItool: end automatically generated code

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
  FastLED.addLeds<LED_TYPE, DATA_PIN, CLOCK_PIN, COLOR_ORDER>
    (leds, NUM_PIXELS);

  // default brightness
  FastLED.setBrightness(48);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  for (i = 0; i < NUM_PIXELS; i++) {
    leds[i] = CRGB::Red;
  }
  FastLED.show();
  delay(150);
  for (i = 0; i < NUM_PIXELS; i++) {
    leds[i] = CRGB::Black;
  }
  FastLED.show();
  delay(150);
}
