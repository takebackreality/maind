#pragma once
#include <Arduino.h>

class Radio {
public:
    void begin();
    void send(String packet);
};
