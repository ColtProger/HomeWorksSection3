#pragma once
#include "GroundTransport.h"
class SuperCamel : public GroundTransport {
private:
   static int count;
   int pnum=0;
public:
    SuperCamel(float distance);
};
