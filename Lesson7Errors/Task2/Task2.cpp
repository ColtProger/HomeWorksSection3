#include <iostream>
#include <string>
#include "Figure.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "Square.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscalestTriangle.h"
#include "EquilateralTriangle.h"
#include "MyException.h"

void print_info(Figure* figure) {
    figure->PrintInfo();
    std::cout << "\n";
}


int main() {

    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли

    try {
        Triangle Triangle2(3, 7, 5, 70, 40, 70);
        print_info(&Triangle2);

     }
    catch (MyException& ex)
    {
        std::cout << "Фгура создана некорректно. " << ex.what() << std::endl;
    }

    try {
         Triangle Triangle(3, 7, 5, 70, 40, 50);
         print_info(&Triangle);
    }
    catch (MyException& ex)
    {
        std::cout << "Фгура создана некорректно. " << ex.what() << std::endl;
    }

    try {
       
        RightTriangle RTr(3, 4, 5, 40, 50, 90);
        print_info(&RTr);

        RightTriangle RTr2(3, 4, 5, 60, 50, 70);
        print_info(&RTr2);

    }
    catch (MyException& ex)
    {
        std::cout << "Фгура создана некорректно. " << ex.what() << std::endl;
       
    }

    try {
        IsoscalestTriangle IsoTriangle(3, 15, 80, 50);
        print_info(&IsoTriangle);

        EquilateralTriangle EquiTriangle(7);
        print_info(&EquiTriangle);
    }
    catch (MyException& ex) {
        std::cout << "Фгура создана некорректно. " << ex.what() << std::endl;
    }


    try {
        Quadrangle Quadrangle(2, 3, 4, 5, 40, 50, 60, 70);
        print_info(&Quadrangle);
    }
    catch (MyException& ex) {
        std::cout << "Фгура создана некорректно. " << ex.what() << std::endl;
    }



    try {
         Parallelogram Parallelogram(2, 5, 80, 100);
         print_info(&Parallelogram);
    }
    catch (MyException& ex) {
        std::cout << "Фгура создана некорректно. " << ex.what() << std::endl;
    }

    try {
         Rectangle Rec1(2, 5, 90);
         print_info(&Rec1);

         Rectangle Rec2(2, 5, 80);
         print_info(&Rec2);

    }
    catch (MyException& ex) {
        std::cout << "Фгура создана некорректно. " << ex.what() << std::endl;
    }


    try {
         Rhombus Rhombus(4, 60, 120);
         print_info(&Rhombus);

    }
    catch (MyException& ex) {
        std::cout << "Фгура создана некорректно. " << ex.what() << std::endl;
    }

    try {
         Square Square(4);
         print_info(&Square);

    }
    catch (MyException& ex) {
        std::cout << "Фгура создана некорректно. " << ex.what() << std::endl;
    }

 
    return 0;
}