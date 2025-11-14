#include "TelemetryPacket.h"

String TelemetryPacket::encode() {
    return String(timestamp) + "," +
           String(temperature) + "," +
           String(pressure) + "," +
           String(altitude);
}
