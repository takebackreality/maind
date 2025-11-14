#include "Sensors.h"
#include <Arduino.h>

void Sensors::begin() {
    if (!bmp.begin(0x76)) {
        Serial.println("BMP280 not found!");
        while (1);
    }
}

float Sensors::getTemperature() {
    return bmp.readTemperature();
}

float Sensors::getPressure() {
    return bmp.readPressure();
}

float Sensors::getAltitude() {
    return bmp.readAltitude(1013.25);
}
