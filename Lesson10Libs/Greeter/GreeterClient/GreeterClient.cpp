#include <iostream>
#include "GreeterLibraryStatic.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    std::string client_nmame;
    std::cout << "Введите имя: ";
    std::cin >> client_nmame;

    GreeterLibraryStatic Gr;
    Gr.greet(client_nmame);

}
