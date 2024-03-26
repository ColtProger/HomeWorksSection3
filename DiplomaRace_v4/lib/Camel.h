#pragma once
#include "GroundTransport.h"
class Camel : public GroundTransport {
private:
   static int count;
   int pnum=0;
   // int count_of_calls = 0;
public:
    Camel(float distance);
    //Camel();
   // ~Camel();

};
