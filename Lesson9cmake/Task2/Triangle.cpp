//  Classes for Triangles
#include "Triangle.h"

Triangle::Triangle(double a, double b, double c, double A, double B, double C) : a(a), b(b), c(c), A(A), B(B), C(C) {
        fig_name = "�����������";

    };
void  Triangle::PrintInfo() {
    std::cout << fig_name << ": " << std::endl;
    std::cout << "�������: a= " << a << ", b= " << b << ", c = " << c << std::endl;
    std::cout << "����: A = " << A << ", B = " << B << ", C = " << C << std::endl;

};


