#include <iostream>
#include "class_calc.h"

int main()

{
    setlocale(LC_ALL, "Russian");
    double a, b;
    while (true) {
        std::cout << "Введите num1:  ";
        std::cin >> a;
        std::cout << "Введите num2:  ";
        std::cin >> b;

        Calculator nums; // (a, b);
        if (nums.set_num1(a) && nums.set_num2(b)) {
            std::cout << "num1 + num2 = " << nums.add() << std::endl;
            std::cout << "num1 - num2 = " << nums.subtract_1_2() << std::endl;
            std::cout << "num2 - num1 = " << nums.subtract_2_1() << std::endl;
            std::cout << "num1*num2 = " << nums.multiply() << std::endl;
            std::cout << "num1/num2 = " << nums.divide_1_2() << std::endl;
            std::cout << "num2/num1 = " << nums.divide_2_1() << std::endl;
        }
        else {
            std::cout << "Неверный ввод!" << std::endl;
        }
    };
}

