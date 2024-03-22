#include "RaceAir.h"
    RaceAir::RaceAir(float distance, int transport_type) :Race(distance, 2, transport_type) {
        race_name = "Гонка для воздушного транспорта";

        if ((transport_type == 1) || (transport_type == 2) || (transport_type == 3) || (transport_type == 4)) {

            throw MyException("Попытка зарегистрировать неправильный тип транспортного средства!");
        };
    };