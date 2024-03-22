#include"DialogFunctions.h"


int RegistrationPreface(int number_of_call) {
    int action;

    if (number_of_call == 0) {
        do {
            std::cout << "1. Зарегистрировать транспорт." << std::endl;
            std::cout << "Выберите действие: ";
            std::cin >> action;
            std::cout << "\n";
        } while (action != 1);
    }
    else {
        do {
            std::cout << "1. Зарегистрировать транспорт." << std::endl;
            std::cout << "2. Начать гонку." << std::endl;
            std::cout << "Выберите действие: ";
            std::cin >> action;
            std::cout << "\n";
        } while ((action != 1) && (action != 2));
    };

    if (action == 1) { return true; }
    else if (action == 2) { return false; }
};

std::string enum_to_name(int num) {
    std::string name;
    TransportType TT = static_cast<TransportType>(num);

    //int num2 = static_cast<int>(TT);
    if (TT == TransportType::eBoots) { name = "Ботинки-вездеходы"; }
    if (TT == TransportType::eCamel) { name = "Верблюд"; }
    if (TT == TransportType::eSuperCamel) { name = "Верблюд-скороход"; }
    if (TT == TransportType::eCentaur) { name = "Кентавр"; }
    if (TT == TransportType::eCarpet) { name = "Ковер-самолет"; }
    if (TT == TransportType::eNimbus2000) { name = "Метла"; }
    if (TT == TransportType::eEagle) { name = "Орел"; }
    return name;
}

std::string enum_to_RaceName(int num) {
    std::string name;
    RaceType TT = static_cast<RaceType>(num);

    if (TT == RaceType::eGround) { name = "Гонка для наземного транспорта"; }
    if (TT == RaceType::eAir) { name = "Гонка для воздушного транспорта"; }
    if (TT == RaceType::eCommon) { name = "Гонка для наземного и воздушного транспорта"; }
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
    std::cout << "0. " << "Завершить регистрацию." << std::endl;
    std::cout << "\n";
};

int Registration() {
    int TS_number;
    list();
    std::cout << "Выберите транспорт или нажмите 0 для окончания процессе регистрации: ";
    std::cin >> TS_number;
    std::cout << "\n";
    if ((TS_number == 8) || (TS_number == 9)) {
        std::cout << "Транспортное средство не выбрано!" << std::endl;
        return TS_number;
    }
    return TS_number;
    //} while ((TS_number == 8) && (TS_number == 9));
       //((TS_number!= 1)&&(TS_number != 2) && (TS_number != 3) && (TS_number != 4) && (TS_number != 5) && (TS_number !=6) && (TS_number != 7) && (TS_number != 0));
};

bool one_more_racing() {

    int reply;

    do {
        std::cout << "1. Провести еще одну гонку" << std::endl;
        std::cout << "2. Выход " << std::endl;
        std::cout << "Выберите действие: ";
        std::cin >> reply;
        std::cout << "\n";
    } while ((reply != 1) && (reply != 2));

    if (reply == 1) { return true; }
    else if (reply == 2) { return false; }


};

int racing_type() {
    int rtype;
    do {
        std::cout << "1." << enum_to_RaceName(1) << std::endl;
        std::cout << "2." << enum_to_RaceName(2) << std::endl;
        std::cout << "3. " << enum_to_RaceName(3) << std::endl;
        std::cout << "Выберите тип гонок: ";
        std::cin >> rtype;
        std::cout << "\n";
    } while ((rtype != 1) && (rtype != 2) && (rtype != 3));

    return rtype;
}
