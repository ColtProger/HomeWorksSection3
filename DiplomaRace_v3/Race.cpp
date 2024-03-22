#include "Race.h"

Race::Race(float distance, int race_type, int transport_type) {
    this->distance = distance;
    this->race_type = race_type;
    this->transport_type = transport_type;
};

std::string Race::get_name() {
    return race_name;
};

float Race::get_Race_time() {
    float time = 0;
    int num = transport_type;
    TransportType TT = static_cast<TransportType>(num);

    if (TT == TransportType::eBoots) {
        // SuperBoots  TS(distance);
        SuperBoots* TS = new SuperBoots(distance);
        time = TS->get_total_time();
        delete TS;

    }
    if (TT == TransportType::eCamel) {
        //Camel  TS(distance);
        Camel* TS = new Camel(distance);
        time = TS->get_total_time();
        delete TS;
    }
    if (TT == TransportType::eSuperCamel) {
        //SuperCamel  TS(distance);
        SuperCamel* TS = new SuperCamel(distance);
        time = TS->get_total_time();
        delete TS;
    }
    if (TT == TransportType::eCentaur) {
        //Centaur   TS(distance);
        Centaur* TS = new Centaur(distance);
        time = TS->get_total_time();
        delete TS;
    }
    if (TT == TransportType::eCarpet) {
        //SuperCarpet TS(distance);
        SuperCarpet* TS = new SuperCarpet(distance);
        time = TS->get_total_time();
        delete TS;
    }
    if (TT == TransportType::eNimbus2000) {
        //Nimbus2000  TS(distance);
        Nimbus2000* TS = new Nimbus2000(distance);
        time = TS->get_total_time();
        delete TS;
    }
    if (TT == TransportType::eEagle) {
        //Eagle  TS(distance);
        Eagle* TS = new Eagle(distance);
        time = TS->get_total_time();
        delete TS;
    }

    return time;
};