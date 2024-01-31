// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Counter {
private:
    int count;
public:
    void InlValue1() { this->count = 1; };
    void InValue(int value) { this->count = value; };

    void GetValue() { std::cout << count << std::endl; };

    void AddValue() {
        this->count = count + 1;
    }; 

    void SubstrValue() {
        this->count = count - 1;
    };
    
    };



std::string question() {
    std::string reply;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> reply;
    if (reply == "ytn") {
        reply = "нет";
    } else if (reply == "lf") {
        reply = "да";
    }
    return reply;
    
}




int main()
{
    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли
    std::string reply;
    char  action;
    int initial_value;

    

    reply = question();

    Counter count;

        if (reply == "нет") {
            count.InlValue1();
            count.GetValue();
        };
        if (reply == "да") {

            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> initial_value;
            count.InValue(initial_value);
            count.GetValue();
        };
   

     //std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
     // std::cin >> action;

     do {
         std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
         std::cin >> action;

          if (action == '+') {
             count.AddValue();
         }
          else if (action == '-') {
             count.SubstrValue();
         }
         else if (action == '=') {
             count.GetValue();
         };
      

     } while ((action != 'x') && (action != 'х'));

    std::cout << "До свидания!" << std::endl;
}

