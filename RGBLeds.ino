#include "RGBLeds.h"

RGBLeds strip; // gebruikt pin D6 op de wemos

void setup() {
}

void loop() {
    for(int i = 0; i < 3; i++){
      strip.brandlichtAan();
      }
    strip.lichtUit();
}