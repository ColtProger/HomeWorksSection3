//  Classes for Triangles
#include "cltriangle.h"

ClassTriangle::ClassTriangle(double a, double b, double c, double A, double B, double C) : a(a), b(b), c(c), A(A), B(B), C(C) {
        fig_name = "�����������";

    };
void  ClassTriangle::PrintInfo() {
    std::cout << fig_name << ": " << std::endl;
    std::cout << "�������: a= " << a << ", b= " << b << ", c = " << c << std::endl;
    std::cout << "����: A = " << A << ", B = " << B << ", C = " << C << std::endl;

};

ClassRightTriangle::ClassRightTriangle(double a, double b, double c, double A, double B) : ClassTriangle(a, b, c, A, B, 90) {
        fig_name = "������������� �����������";

    };

ClassIsoscalestTriangle::ClassIsoscalestTriangle(double a, double b, double A, double B) : ClassTriangle(a, b, b, A, B, B) {
        fig_name = "�������������� �����������";

    };

// Equilateral
ClassEquilateralTriangle::ClassEquilateralTriangle(double a) : ClassIsoscalestTriangle(a, a, 60, 60) {
        fig_name = "�������������� �����������";

  };
