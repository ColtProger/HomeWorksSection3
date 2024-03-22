#include "Nimbus2000.h"

   Nimbus2000::Nimbus2000(float distance) :AirTransport(distance, 20) {
        transport_name = "Метла";
        koef = static_cast<int>(distance / 1000);

    };