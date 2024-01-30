// Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

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
    /*std::cout << "Hello World!\n";
    double a, b;
    int i = 1;
    while(i>0) {
        std::cout << "Enter two numbers: "  << std::endl;
        std::cin >> a >> b;
        std::cout << a + b << std::endl;;

    } ;*/
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
