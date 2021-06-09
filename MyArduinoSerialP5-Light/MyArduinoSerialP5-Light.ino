//LED Strip
#define FASTLED_ALLOW_INTERRUPTS 1
#define FASTLED_INTERRUPT_RETRY_COUNT 1
#include <FastLED.h>
#define LED_PIN     9
#define NUM_LEDS    65
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
int beam = 4; 
int ledNum =   NUM_LEDS + beam;

  
  for (int i = 0; i <= ledNum; i++) {
    leds[i] = CRGB(255, 255, 255);
    leds[i-4] = CRGB(0, 0, 0);
    FastLED.show();
    delay(10);
  }

      
//  if (Serial.available() > 0) {
//   FastLED.clear();
//   //Serial.begin(9600);
////  // if there's serial data available
////    int inByte = Serial.read();   // read it
////    Serial.write(inByte);         // send it back out as raw binary data
////    analogWrite(5, inByte);       // use it to set the LED brightness 
//    } 
  }
