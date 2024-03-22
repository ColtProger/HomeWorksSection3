#pragma once
#include <string>

#include "Transport.h"
#include "GroundTransport.h"
#include "AirTransport.h"
#include "Camel.h"
#include "SuperCamel.h"
#include "SuperBoots.h"
#include "Centaur.h"
#include "SuperCarpet.h"
#include "Eagle.h"
#include "Nimbus2000.h"
#include "EnumList.h"

class Race {
protected:
    float distance;
    int transport_type;
    int race_type;
    std::string race_name = "√онка дл€ наземного и воздушного транспорта";

public:
    Race(float, int, int);

    std::string get_name();

    float get_Race_time();

};
