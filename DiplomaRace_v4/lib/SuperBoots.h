#pragma once
#include "GroundTransport.h"
class SuperBoots : public GroundTransport {
private:
    static int count;
    int pnum = 0;
public:
    SuperBoots(float distance);
   };

