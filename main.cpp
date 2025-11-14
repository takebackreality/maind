#include <Arduino.h>
#include "Sensors.h"
#include "Radio.h"
#include "TelemetryPacket.h"

Sensors sensors;
Radio radio;

void setup() {
    Serial.begin(115200);
    sensors.begin();
    radio.begin();
}

void loop() {
    TelemetryPacket packet;
    packet.timestamp = millis();
    packet.temperature = sensors.getTemperature();
    packet.pressure = sensors.getPressure();
    packet.altitude = sensors.getAltitude();

    String encoded = packet.encode();
    radio.send(encoded);

    delay(1000);
}
