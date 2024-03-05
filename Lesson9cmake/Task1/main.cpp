#include <iostream>
#include <clocale>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли
	std::string name;
	std::cout << "Введите свое имя: asdf ";
std::cin >> name;
std::cout << "Здравствуйте, " << name<<std::endl; 	

}