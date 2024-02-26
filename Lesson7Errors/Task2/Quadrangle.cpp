//  Classes for Quadrangles
#include "Quadrangle.h"
#include "MyException.h"


Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D) : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
    fig_name = "���������������";
    sides_count = 4;
    if ((A + B + C + D) != 360) {
        throw MyException("�������: ����� ����� �� ����� 360");
    }
};

void  Quadrangle::PrintInfo() {
    Figure::PrintInfo();
    std::cout << "(�������: " << a << ", " << b << ", " << c <<", " << d << "; ";
    std::cout << "����: " << A << ", " << B << ", " << C <<", " <<D <<" )" << " ������" << std::endl;
    // std::cout << "\n";
};




