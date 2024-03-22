#include "AirTransport.h"

AirTransport::AirTransport(float distance, float speed) {
    this->distance = distance;
    this->speed = speed;
};

float AirTransport::get_total_time() {
    float dist = distance * (100 - koef) / 100;
    float total_time = dist / speed;

    return total_time;
};

