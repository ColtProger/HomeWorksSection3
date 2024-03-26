#pragma once
#include "Transport.h"
class AirTransport : public Transport {

protected:
    float speed = 1;
    int koef = 0;
    float distance = 1;

public:
    AirTransport(float distance, float speed);

    float get_total_time();
};

