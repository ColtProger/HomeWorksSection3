#include "RaceAir.h"
    RaceAir::RaceAir(float distance, int transport_type) :Race(distance, 2, transport_type) {
        race_name = "����� ��� ���������� ����������";  
        this->distance = distance;
        this->transport_type = transport_type;
    };

    bool RaceAir::TS_check(){
        if ((transport_type == 1) || (transport_type == 2) || (transport_type == 3) || (transport_type == 4)) {
            std::cout << "������� ���������������� ������������ ��� ������������� ��������!" << std::endl;
            return false;
        }
        else { return true; }
    };