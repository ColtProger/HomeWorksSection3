#include <iostream>
#include <string>
#include "clfigure.h"
#include "clquadrangle.h"
#include "cltriangle.h"


void print_info(ClassFigure* figure) {
    figure->PrintInfo();
    std::cout << "\n";

}


int main() {

    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли

    ClassTriangle Triangle(3, 7, 5, 70, 40, 50);
    print_info(&Triangle);

    ClassRightTriangle RightTriangle(3, 4, 5, 40, 50);
    print_info(&RightTriangle);

    ClassIsoscalestTriangle IsoTriangle(3, 15, 40, 100);
    print_info(&IsoTriangle);

    ClassEquilateralTriangle EquiTriangle(7);
    print_info(&EquiTriangle);

    ClassQuadrangle Quadrangle(2, 3, 4, 5, 40, 50, 60, 70);
    print_info(&Quadrangle);

    ClassParallelogram Parallelogram(2, 5, 80, 100);
    print_info(&Parallelogram);

    ClassRectangle Rectangle(2, 5, 90);
    print_info(&Rectangle);

    ClassRhombus Rhombus(4, 60, 120);
    print_info(&Rhombus);

    ClassSquare Square(4);
    print_info(&Square);






    return 0;
}