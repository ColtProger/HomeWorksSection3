// LeaverClient.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "LeaverLibrary.h"

int main()
{

    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    std::string client_nmame;
    std::cout << "Введите имя: ";
    std::cin >> client_nmame;

    LeaverLibrary L;
    L.leave(client_nmame);

    return 0;
}