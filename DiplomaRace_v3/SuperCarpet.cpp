#include "SuperCarpet.h"

SuperCarpet::SuperCarpet(float distance) :AirTransport(distance, 10) {
        transport_name = "Ковер-самолет";

        if (distance < 1000) { koef = 0; }
        if ((distance >= 1000) && (distance < 5000)) { koef = 3; }
        if ((distance >= 5000) && (distance < 10000)) { koef = 10; }
        if (distance >= 10000) { koef = 10; }
    };