#include "RGBLeds.h"

RGBLeds strip; // Maak een object van de klasse RGBController

void setup() {
}

void loop() {
    strip.entreelichtAan(); // Roep de brandlichtRGB-functie aan
    delay(5000);
    for(int i = 0; i < 3; i++){
      strip.brandlichtAan();
      }
    strip.lichtUit();
}