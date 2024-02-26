//  Classes for Triangles
#include "Triangle.h"
#include "MyException.h"

Triangle::Triangle(double a, double b, double c, double A, double B, double C) : a(a), b(b), c(c), A(A), B(B), C(C) {
    fig_name = "�����������";
    sides_count = 3;
    if ((A + B + C) != 180) {
        throw MyException("�������: ����� ����� �� ����� 180");
    }

};


void  Triangle::PrintInfo() {
    Figure::PrintInfo();
    std::cout << "(�������: " << a << ", " << b << ", " << c << "; ";
    std::cout << "����: " << A << ", " << B << ", " << C << " )"  << " ������" << std::endl;
   // std::cout << "\n";
};