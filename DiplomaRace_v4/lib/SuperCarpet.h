#pragma once
#include "AirTransport.h"
class SuperCarpet : public AirTransport {
private:
    static int count;
    int pnum  = 0;
public:
    SuperCarpet(float distance);
};