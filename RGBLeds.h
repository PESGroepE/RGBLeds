#ifndef RGBLEDS_H
#define RGBLEDS_H

#include <Adafruit_NeoPixel.h>

class RGBLeds {
public:
    RGBLeds();

    void brandlichtAan();
    void entreelichtAan();
    void lichtUit();

private:
    static const int PIN = D6;
    static const int AANTAL_LEDS = 60;
    static const int GROEP = 10;

    Adafruit_NeoPixel leds;
};

#endif