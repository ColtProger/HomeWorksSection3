// Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

enum class EnumM { January = 1, February, March, April, May, June, July, August, September, October, November, December };

std::string print_month_enum(EnumM month) {
     int k = static_cast<int>(month); 
     std::string EnumStrings[] = { "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь","Декабрь" };
     if (k < 1 || k > 12) {
         return "Такого месяца нет..";
     } else {

             return EnumStrings[k - 1];
         }
}

int main()
{
    int usernumber;
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите номер месяца (чтобы выйти нажмите 0)!\n";
    std::cin >> usernumber;

    while (usernumber != 0) {
        EnumM month = static_cast<EnumM>(usernumber);
        
        std::cout <<  print_month_enum(month) << std::endl;

        std::cout << "Введите номер месяца (чтобы выйти нажмите 0)!\n";
        std::cin >> usernumber;

        
    }

    std::cout << "До свидания!\n";
    return 0;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

