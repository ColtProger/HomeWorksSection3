// Diploma_Race.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<vector>
#include<algorithm>
#include <stdexcept>
#include <typeinfo>

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
#include "Race.h"
#include "RaceGround.h"
#include "RaceAir.h"
#include "DialogFunctions.h"

struct StrTransport
{
    int TS_number;
    float time;
};
// reset of bool operation for transport structure
bool operator < (const StrTransport& TS1, const StrTransport& TS2)
{
    return TS1.time < TS2.time;
};

int main()
{
    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли

    
    int race_type;
    bool one_more = true;
    float distance;
    
    //Creation of vector for keeping TS and time
     std::vector<StrTransport> participants = {};
     

    // The veery begining
       std::cout << "Добро пожаловать в симулятор гонок!" << std::endl;
    
    // the external one-more-race loop
    while (one_more) {

        int count_of_call = 0;
        int TS_number;
        float race_time = 0;
        bool reg = 1;
       


        // choice of race type and distance
        race_type = racing_type();


        std::cout << "Укажите длину дистанции (должна быть положительна): ";
        std::cin >> distance;
        std::cout << "\n";

        std::cout << "Должно быть зарегистрировано хотя бы 2 странспортных средства." << std::endl;
        reg = RegistrationPreface(0);

        while (reg == 1) {
            
            TS_number = 1;
            while (TS_number != 0) {
                std::cout << enum_to_RaceName(race_type) << ". Расстояние " << distance << std::endl;
                int last_TS;
                bool extn = false;
                TS_number = Registration();
                if (race_type == 1) {
                   RaceGround R1(distance, TS_number);
                   extn = R1.TS_check();
                   race_time = R1.get_Race_time();              
                 }
                else if (race_type == 2) {
                    RaceAir R1(distance, TS_number);
                    extn = R1.TS_check();
                    race_time = R1.get_Race_time();
                 }
                 else if (race_type == 3) {
                    Race R1(distance, race_type, TS_number);
                    extn = R1.TS_check();
                    race_time = R1.get_Race_time();
                 }

                if ((TS_number != 0) && (TS_number != 8) && (TS_number != 9) && (extn == true)) {
                    StrTransport x = { TS_number, race_time };
                    participants.push_back(x);
                    last_TS = x.TS_number;
                    // check repeating of TS
                        int coinsaid = 0;
                        for (int i = 0; i < static_cast<int>(participants.size()) - 1; ++i) {
                            if (participants[i].TS_number == last_TS) { coinsaid++; }
                        }
                        if (coinsaid > 0) {
                            std::cout << enum_to_name(last_TS) << " уже зарегистрирован!" << std::endl;
                            participants.pop_back();
                        }
                        else {                  

                            std::cout << enum_to_name(x.TS_number) << " успешно зарегистртирован!" << std::endl;
                        }
                };
                    
                    

               std::cout << "Зарегистрированные транспортные средства: ";
               for (int i = 0; i < static_cast<int>(participants.size()); ++i) {
                    std::string TS_name = enum_to_name(participants[i].TS_number);
                    std::cout << TS_name << ",  ";
                };
                std::cout << "\n";
                            
            }


            
            count_of_call++;
            reg = RegistrationPreface(count_of_call);
        };

        
        std::cout << "Результаты гонки: " << std::endl;

        std::sort(participants.begin(), participants.end());

        for (int i = 0; i < static_cast<int>(participants.size()); ++i) {
            std::string TS_name = enum_to_name(participants[i].TS_number);
            std::cout << TS_name << ". Время:  " << participants[i].time << '\n';
        };
        std::cout << "\n";


        participants.clear(); //vector cleaning

        // Asking if user wants to make one more race
        one_more = one_more_racing();
    };

    
    return 0;
}

