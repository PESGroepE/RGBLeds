#include "RGBLeds.h"

RGBLeds::RGBLeds() : leds(AANTAL_LEDS, PIN, NEO_GRB + NEO_KHZ800) {
    leds.begin();
    leds.clear();
    leds.show();
}

void RGBLeds::brandlichtAan() {
    for(int i = 0; i <= AANTAL_LEDS - GROEP; i++) {
        for(int j = 0; j < GROEP; j++) {
            leds.setPixelColor(i + j, leds.Color(255, 0, 0)); // Set pixel i+j to red
        }
        leds.show();
        delay(20);
        leds.clear();
    }
}

void RGBLeds::entreelichtAan(){
  for(int i = 0; i < AANTAL_LEDS; i ++){
    leds.setPixelColor(i, leds.Color(255, 255, 255));
  }
  leds.show();
  delay(100);
}

void RGBLeds::lichtUit(){
  for(int i = 0; i < AANTAL_LEDS; i ++){
    leds.setPixelColor(i, leds.Color(0, 0, 0));
  }
  leds.show();
  delay(100);
}