//  Classes for Triangles
#include "Triangle.h"
#include "MyException.h"

Triangle::Triangle(double a, double b, double c, double A, double B, double C) : a(a), b(b), c(c), A(A), B(B), C(C) {
    fig_name = "Треугольник";
    sides_count = 3;
    if ((A + B + C) != 180) {
        throw MyException("Причина: сумма углов не равна 180");
    }

};


void  Triangle::PrintInfo() {
    Figure::PrintInfo();
    std::cout << "(стороны: " << a << ", " << b << ", " << c << "; ";
    std::cout << "углы: " << A << ", " << B << ", " << C << " )"  << " создан" << std::endl;
   // std::cout << "\n";
};