#include <iostream>

struct bank_account { std::string first_name; std::string account; int balance; };

int add_new_balance(bank_account& na) {
    int new_balance;
    std::cout << "Введите новый баланс: ";
    std::cin >> new_balance;
    na.balance = new_balance;
    return new_balance;
};

int main()
{
    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли
    bank_account pers;
    std::cout << "Введите номер счёта: ";
    std::cin >> pers.account;
    std::cout << "Введите имя: ";
    std::cin >> pers.first_name;
    std::cout << "Введите баланс: ";
    std::cin >> pers.balance;
    
    add_new_balance(pers);
    std::cout << "Ваш счёт: " << pers.first_name<< ", " << pers.account <<", " << pers.balance <<std::endl;


    
}

