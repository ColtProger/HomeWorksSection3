#pragma once
#include "Race.h"

class RaceAir : public Race {
protected:
    float distance = 0;
    int transport_type = 1;
public:
    RaceAir(float distance, int transport_type);
};
