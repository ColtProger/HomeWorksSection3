//  Classes for Quadrangles
#include "Quadrangle.h"

Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D) : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
    fig_name = "���������������";
};

void Quadrangle::PrintInfo() {
    std::cout << fig_name << ": " << std::endl;
    std::cout << "�������: a= " << a << ", b= " << b << ", c = " << c << ", d = " << d << std::endl;
    std::cout << "����: A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << std::endl;
};




