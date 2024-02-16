#include <iostream>

#include "calculator.h"

int main()
{
    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли

    int x, y;
    int action;
    std::cout << "Введите первое число: ";
    std::cin >> x;
    std::cout << "Введите второе число: ";
    std::cin >> y;

    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> action;

    switch (action) {
        case 1: 
            std::cout << "Сумма " << x << " + " << y << " = " << summation(x, y) << std::endl;
            break;
        case 2:
            std::cout << "Разность " << x << " - " << y << " = " << difference(x, y) << std::endl;
            break;
        case 3:
            std::cout << "Произведение " << x << "*" << y << " = " << multiplication(x, y) << std::endl;
            break;
        case 4:
            std::cout << "Отношение " << x << "/" << y << " = " << division(x, y) << std::endl;
            break;
        case 5:
            std::cout << x << " в степени " << y << " = " << pow(x, y) << std::endl;
            break;
    
        default :
            std::cout << "Нет такого действия. "  << std::endl;
            break;

    }
    
}
