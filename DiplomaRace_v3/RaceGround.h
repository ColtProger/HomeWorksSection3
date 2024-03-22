#pragma once
#include "Race.h"

class RaceGround : public Race {
protected:
    float distance = 0;
    int transport_type = 1;
public:
    RaceGround(float distance, int transport_type);
};
