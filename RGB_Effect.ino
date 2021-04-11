#include <FastLED.h>

#define NUM_LEDS  35 // No of LED in your strip
#define LED_PIN   6 // Define the Data output pin



CRGB leds[NUM_LEDS];


void setup() {
  FastLED.addLeds<SM16703, LED_PIN, BRG>(leds, NUM_LEDS);
  FastLED.setBrightness(255);
}

void loop() {
    fill_solid(leds, NUM_LEDS, CRGB::Red);
  FastLED.show();
    delay(2000);
    
    fill_solid(leds, NUM_LEDS, CRGB::Green);
  FastLED.show();
    delay(2000);
    
    fill_solid(leds, NUM_LEDS, CRGB::Blue);
  FastLED.show();
    delay(2000);
    
    
    fill_solid(leds, NUM_LEDS, CRGB::Red);
  FastLED.show();
    delay(400);
    fill_solid(leds, NUM_LEDS, CRGB::Green);
  FastLED.show();
    delay(400);
    
    fill_solid(leds, NUM_LEDS, CRGB::Blue);
  FastLED.show();
    delay(400);
   

  for(int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Red;
    FastLED.show();
    delay(100);
    
  }

  for(int i = NUM_LEDS - 1; i >= 0; i--) {
    leds[i] = CRGB::Green;
    FastLED.show();
    delay(100);
    
  }
  
for(int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Blue;
    FastLED.show();
    delay(100);
    
  }
    
    for (int i = NUM_LEDS/2; i >= 0; i--) 
  {
     leds[i] = CRGB::Red;
     leds[NUM_LEDS-i] = CRGB::Red;
     delay(100);
    FastLED.show();
        }
    
    
    for (int i = NUM_LEDS/2; i >= 0; i--) 
  {
     leds[i] = CRGB::Green;
     leds[NUM_LEDS-i] = CRGB::Green;
     delay(100);
    FastLED.show();
        }
    for (int i = NUM_LEDS/2; i >= 0; i--) 
  {
     leds[i] = CRGB::Blue;
     leds[NUM_LEDS-i] = CRGB::Blue;
     delay(100);
        FastLED.show();
        }
    }