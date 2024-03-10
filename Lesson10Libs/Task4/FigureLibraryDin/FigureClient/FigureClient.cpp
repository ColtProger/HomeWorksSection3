#include <iostream>
#include <string>
#include "FigureLibrary.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "Square.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscalestTriangle.h"
#include "EquilateralTriangle.h"

using namespace FigureLibrary;

void print_info(Figure* figure) {
    figure->PrintInfo();
    std::cout << "\n";
}


int main() {

    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли

    Triangle Triangle(3, 7, 5, 70, 40, 50);
    print_info(&Triangle);

    RightTriangle RightTriangle(3, 4, 5, 40, 50);
    print_info(&RightTriangle);

    IsoscalestTriangle IsoTriangle(3, 15, 40, 100);
    print_info(&IsoTriangle);

    EquilateralTriangle EquiTriangle(7);
    print_info(&EquiTriangle);

    Quadrangle Quadrangle(2, 3, 4, 5, 40, 50, 60, 70);
    print_info(&Quadrangle);

    Parallelogram Parallelogram(2, 5, 80, 100);
    print_info(&Parallelogram);

    Rectangle Rectangle(2, 5, 90);
    print_info(&Rectangle);

    Rhombus Rhombus(4, 60, 120);
    print_info(&Rhombus);

    Square Square(4);
    print_info(&Square);






    return 0;
}