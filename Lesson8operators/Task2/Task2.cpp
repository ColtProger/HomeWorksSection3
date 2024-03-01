#include <iostream>
#include "Fraction.h"


int main(int argc, char** argv)
{
	    setlocale(LC_ALL, "RU");
	    int num1, num2;
	    int denom1, denom2;

		std::cout << "Введите числитель дроби 1: ";
		std::cin >> num1;
		std::cout << "Введите знаменатель дроби 1 :";
		std::cin >> denom1;
		std::cout << "Введите числитель дроби 2 :";
		std::cin >> num2;
		std::cout << "Введите знаменатель дроби 2 :";
		std::cin >> denom2;

		Fraction frac1(num1, denom1);
		Fraction frac2(num2, denom2);

		std::cout << frac1 << " + " << frac2 << " = " << frac1 + frac2 << std::endl;
		std::cout << frac1 << " - " << frac2 << " = " << frac1 - frac2 << std::endl;
		std::cout << frac1 << " * " << frac2 << " = " << frac1 * frac2 << std::endl;
		std::cout << frac1 << " / " << frac2 << " = " << frac1 / frac2 << std::endl;
		std::cout << "++" << frac1 << " * " << frac2 << " = ";
		std::cout << ++frac1 * frac2 << std::endl;
		std::cout << "Значение дроби 1 =  " << frac1 << std::endl;
		std::cout << frac1 << "--" << " * " << frac2 << " = ";
		std::cout << frac1-- * frac2 << std::endl;
		std::cout << "Значение дроби 1 =  " << frac1 << std::endl;;
		
	return 0;


}