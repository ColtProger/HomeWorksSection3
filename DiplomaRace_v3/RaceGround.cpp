#include "RaceGround.h"

    RaceGround:: RaceGround(float distance, int transport_type) :Race(distance, 1, transport_type) {
        race_name = "√онка дл€ наземного транспорта";

        if ((transport_type == 5) || (transport_type == 6) || (transport_type == 7)) {
            throw MyException("ѕопытка зарегистрировать неправильный тип транспортного средства!");
        };
    };