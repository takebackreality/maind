#pragma once
#include <Adafruit_BMP280.h>

class Sensors {
public:
    void begin();
    float getTemperature();
    float getPressure();
    float getAltitude();

private:
    Adafruit_BMP280 bmp;
};
