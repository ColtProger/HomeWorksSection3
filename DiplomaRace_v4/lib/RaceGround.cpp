#include "RaceGround.h"

   RaceGround:: RaceGround(float distance, int transport_type) :Race(distance, 1, transport_type) {
        race_name = "����� ��� ��������� ����������";
        this->distance = distance;
        this->transport_type = transport_type;
    };

    bool RaceGround::TS_check() {
        if ((transport_type == 5) || (transport_type == 6) || (transport_type == 7)) {
            std::cout<< "������� ���������������� ������������ ��� ������������� ��������!" <<std::endl;
            return false;
        }
        else {
            return true;
        }
    };