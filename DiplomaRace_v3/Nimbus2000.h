#pragma once
#include "AirTransport.h"

class Nimbus2000 : public AirTransport {
private:
    static int count;
    int pnum = 0;
public:
    Nimbus2000(float distance);

};