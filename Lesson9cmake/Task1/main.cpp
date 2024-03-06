#include <iostream>
#include <clocale>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian"); 
    system("chcp 1251"); 
	std::string name;
	std::cout << "Введите свое имя: ";
std::cin >> name;
std::cout << "Здравствуйте, " << name<<std::endl; 	

}