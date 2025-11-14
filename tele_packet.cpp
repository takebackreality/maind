#pragma once
#include <Arduino.h>

typedef struct {
    unsigned long timestamp;
    float temperature;
    float pressure;
    float altitude;

    String encode();
} TelemetryPacket;
