//  Classes for Triangles
#include "Triangle.h"

Triangle::Triangle(double a, double b, double c, double A, double B, double C) : a(a), b(b), c(c), A(A), B(B), C(C) {
        fig_name = "Треугольник";

    };
void  Triangle::PrintInfo() {
    std::cout << fig_name << ": " << std::endl;
    std::cout << "Стороны: a= " << a << ", b= " << b << ", c = " << c << std::endl;
    std::cout << "Углы: A = " << A << ", B = " << B << ", C = " << C << std::endl;

};


