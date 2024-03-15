// Diploma_Race.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

enum class TransportType
{
    eBoots = 1,
    eCamel,
    eSuperCamel,
    eCentaur,
    eCarpet,
    eNimbus2000,
    eEagle

};


class Transport {
protected:
    float total_time;
    std::string transport_name;
    float distance;

public:

    std::string get_name() {
        return transport_name;
    };

 };


class GroundTransport: public Transport {
private:
    float speed = 1;
    float time_before_rest = 1;
    float time_for_rest1 = 1;
    float time_for_rest2 = 1;
    float time_for_rest3 = 1;
    float distance = 1;

public:
    GroundTransport(float distance, float speed, float time_before_rest, float time_for_rest1, float time_for_rest2, float time_for_rest3) {
       this-> distance = distance;
       this->speed = speed;
       this->time_before_rest = time_before_rest;
       this->time_for_rest1 = time_for_rest1;
       this->time_for_rest2 = time_for_rest2;
       this->time_for_rest3 = time_for_rest3;
    }

    float get_total_time(){
        float time = distance/speed;
        int number_of_stops = time / time_before_rest;

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
        total_time += time_for_rest1 + time_for_rest2 + (number_of_stops-2)*time_for_rest3;

        return total_time; //total_time;
    }
};

class Camel : public GroundTransport {
public:
    Camel(float distance) :GroundTransport(distance, 10, 30, 5, 8, 8) {
        transport_name = "Верблюд";
    };


};

class SuperCamel : public GroundTransport {
public:
    SuperCamel(float distance) :GroundTransport(distance, 40, 10, 5, 6.5, 8) {
        transport_name = "Верблюд-скороход";
    };


};

class Centaur : public GroundTransport {
public:
    Centaur(float distance) :GroundTransport(distance, 15, 8, 2, 2, 2) {
        transport_name = "Кентавр";
    };
};

class SuperBoots : public GroundTransport {
 public:
     SuperBoots(float distance) :GroundTransport(distance, 6, 60, 10, 5, 5) {
            transport_name = "Ботинки-вездеходы";
        };


};


class AirTransport : public Transport {
protected:
    float speed = 1;
    int koef = 0;
    float distance = 1;

public:
    AirTransport(float distance, float speed) {
        this->distance = distance;
        this->speed = speed;
     }

    float get_total_time() {
        float dist = distance *(100 - koef)/100;
        float total_time = dist/speed;

        return total_time; 
    }
};

class SuperCarpet : public AirTransport {
public:
    SuperCarpet(float distance) :AirTransport(distance, 10) {
        transport_name = "Ковер-самолеты";

        if (distance < 1000) { koef = 0; }
        if ((distance >= 1000) && (distance < 5000)) { koef = 3; }
        if ((distance >= 5000) && (distance < 10000)) { koef = 10; }
        if (distance >= 10000) { koef = 10; }
    };
};


class Eagle : public AirTransport {
public:
    Eagle(float distance) :AirTransport(distance, 8) {
        transport_name = "Орел";
        koef = 6;
       
    };
};

class Nimbus2000 : public AirTransport {
public:
    Nimbus2000(float distance) :AirTransport(distance, 20) {
        transport_name = "Метла";
        koef = distance/1000;

    };
};

//class Registration {
//private:
//    int racing_type;
//    int transport_type;
//    int number_of_air;
//    int number_of_ground;
//
//public:
//
//
//
//};

std::string enum_to_name(int num) {
    std::string name;
    TransportType TT = static_cast<TransportType>(num);

    //int num2 = static_cast<int>(TT);
    if (TT == TransportType::eBoots) { name = "Ботинки-Вездеходы";  }
    if (TT == TransportType::eCamel) { name = "Верблюд"; }
    if (TT == TransportType::eSuperCamel) { name =  "Верблюд-скороход"; }
    if (TT == TransportType::eCentaur) { name =  "Кентавр"; }
    if (TT == TransportType::eCarpet) { name = "Ковер-самолет"; }
    if (TT == TransportType::eNimbus2000) { name = "Метла"; }
    if (TT == TransportType::eEagle) { name = "Орел"; }
    return name;
 }

void list() {
    std::cout << "1. " << enum_to_name(1) << std::endl;
    std::cout << "2. " << enum_to_name(2) << std::endl;
    std::cout << "3. " << enum_to_name(3) << std::endl;
    std::cout << "4. " << enum_to_name(4) << std::endl;
    std::cout << "5. " << enum_to_name(5) << std::endl;
    std::cout << "6. " << enum_to_name(6) << std::endl;
    std::cout << "7. " << enum_to_name(7) << std::endl;

}

bool one_more_racing() {

    int reply;

    do {
        std::cout << "1. Провести еще одну гонку" << std::endl;
        std::cout << "2. Выход " << std::endl;
        std::cin >> reply;

        if (reply == 1) {
            return true;
        }
        else if (reply ==2 ) {
            return false;
        }
    } while ((reply!= 1) && (reply != 2));
    
};



int main()
{
    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли

    int racing_type;
    float distance;
    std::cout << "Добро пожаловать в симулятор гонок!" << std::endl;
    std::cout << "1. Гонка для наземного транспорта." << std::endl;
    std::cout << "2. Гонка для воздушного транспорта." << std::endl;
    std::cout << "3. Гонка для наземного и воздушного транспорта." << std::endl;
    std::cout << "Выберите тип гонок: ";
    std::cin >> racing_type;

    if ((racing_type != 1) && (racing_type != 2) && (racing_type != 3)) {
        std::cout << "Такого типа гонки нет!" << std::endl;
    }
    
    while (one_more_racing()) {
        std::cout << "Укажите длину дистанции: ";
        std::cin >> distance;



        Camel C1(distance);
        std::cout << C1.get_name() << C1.get_total_time() << std::endl;

        SuperCamel C2(distance);
        std::cout << C2.get_name() << C2.get_total_time() << std::endl;

        Centaur C3(distance);
        std::cout << C3.get_name() << C3.get_total_time() << std::endl;

        SuperBoots C4(distance);
        std::cout << C4.get_name() << C4.get_total_time() << std::endl;

        SuperCarpet C5(distance);
        std::cout << C5.get_name() << C5.get_total_time() << std::endl;

        Eagle C6(distance);
        std::cout << C6.get_name() << C6.get_total_time() << std::endl;

        Nimbus2000 C7(distance);
        std::cout << C7.get_name() << C7.get_total_time() << std::endl;
    }

    
    list();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
