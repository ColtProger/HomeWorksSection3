#pragma once
#include "Transport.h"
class GroundTransport : public Transport {
private:
    float speed = 1;
    float time_before_rest = 1;
    float time_for_rest1 = 1;
    float time_for_rest2 = 1;
    float time_for_rest3 = 1;
    float distance = 1;
    int count = 1;

public:
    GroundTransport(float distance,  float speed, float time_before_rest, float time_for_rest1, float time_for_rest2, float time_for_rest3);

    float get_total_time();
};
