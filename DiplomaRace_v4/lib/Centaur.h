#pragma once
#include "GroundTransport.h"
class Centaur : public GroundTransport {
private:
    static int count;
    int pnum = 0;
public:
    Centaur(float distance);
};
