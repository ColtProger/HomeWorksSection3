#include "GroundTransport.h"

GroundTransport::GroundTransport(float distance, float speed, float time_before_rest, float time_for_rest1, float time_for_rest2, float time_for_rest3) {
    this->distance = distance;
    this->count = count;
    this->speed = speed;
    this->time_before_rest = time_before_rest;
    this->time_for_rest1 = time_for_rest1;
    this->time_for_rest2 = time_for_rest2;
    this->time_for_rest3 = time_for_rest3;
};

float GroundTransport::get_total_time() {
    float time = distance / speed;
    int number_of_stops = static_cast<int>(time / time_before_rest);

    if ((distance - time_before_rest * speed * number_of_stops) == 0) {
        number_of_stops = number_of_stops - 1;
    }
    float total_time = time;
    if (number_of_stops == 1) {
        total_time += time_for_rest1;
    };
    if (number_of_stops == 2) {
        total_time += time_for_rest1 + time_for_rest2;
    };
    total_time += time_for_rest1 + time_for_rest2 + (number_of_stops - 2) * time_for_rest3;

    return total_time; 
};