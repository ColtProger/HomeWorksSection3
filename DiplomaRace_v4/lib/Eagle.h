#pragma once
#include "AirTransport.h"

class Eagle : public AirTransport {
private:
    static int count;
    int pnum =0;
public:
    Eagle(float distance);
};