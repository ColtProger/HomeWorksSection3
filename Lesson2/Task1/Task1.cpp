#include <iostream>
class Calculator {
public: 
    double num1;
    double num2; 

    bool set_num1(double num1) {
        if (num1 == 0) { return false;  }
        this->num1 = num1;
        return true;
       
    };

    bool set_num2(double num2) {
        if (num2 == 0) {
            return false;
        }
        else {
            this->num2 = num2;
            return true;
        };
    };
    double add() {
        return num1 + num2;
    };

    double multiply() {
        return num1*num2;
    };

    double subtract_1_2() {
        return num1 - num2;
    }
    double subtract_2_1() {
        return num2 - num1;
    };

    double divide_1_2() {
        return num1/num2;
    };

    double divide_2_1() {
        return num2 / num1;
    };
        
};

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
            std::cout << "num1 + num2 = "<< nums.add() << std::endl;
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

