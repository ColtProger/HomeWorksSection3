#pragma once
#include<iostream>
#include "MyException.h"


class Transport {
protected:
    float total_time = 0;
    std::string transport_name = "";
    float distance = 1;
    int count = 0;
   
public:

    std::string get_name();
    float get_total_time();

};
