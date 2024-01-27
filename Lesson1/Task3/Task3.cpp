#include <iostream>

struct postal_address { std::string city; std::string street; int home_number; int app_number; std::string postal_code; };

void print_address(postal_address& addr) {
     std::cout << "Город: " << addr.city << std::endl;
     std::cout << "Улица: " << addr.street << std::endl;
     std::cout << "Номер дома: " << addr.home_number << std::endl;
     std::cout << "Номер квартиры: " << addr.app_number << std::endl;
     std::cout << "Индекс: " << addr.postal_code << std::endl;
     std::cout << "\n" << "\n";
};

//postal_address getAddresFromBD() {
//    return postal_address{ "Москва", "Арбат", 12, 8, "123456" };
//};

int main()
{
    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли
    
    postal_address* addres_array = new postal_address[3];
    addres_array[0] = { "Москва", "Арбат", 12, 8, "123456" };
    addres_array[1] = { "Ижевск", "Пушкина", 59, 143, "953769" };
    addres_array[2] = { "Саратов", "Крымская", 12, 12, "167532" };

    for (int i = 0; i <= 2; i++) { print_address(addres_array[i]); };



}

