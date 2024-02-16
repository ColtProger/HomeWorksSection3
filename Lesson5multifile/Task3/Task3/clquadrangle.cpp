//  Classes for Quadrangles
#include "clquadrangle.h"

ClassQuadrangle::ClassQuadrangle(double a, double b, double c, double d, double A, double B, double C, double D) : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
    fig_name = "���������������";
};

void ClassQuadrangle::PrintInfo() {
    std::cout << fig_name << ": " << std::endl;
    std::cout << "�������: a= " << a << ", b= " << b << ", c = " << c << ", d = " << d << std::endl;
    std::cout << "����: A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << std::endl;
};


//  Class Rectangle
ClassRectangle::ClassRectangle(double a, double b, double A) : ClassQuadrangle(a, b, a, b, 90, 90, 90, 90) {
    fig_name = "�������������";
};


//Class Parallelogram
ClassParallelogram::ClassParallelogram(double a, double b, double A, double B) : ClassQuadrangle(a, b, a, b, A, B, A, B) {
    fig_name = "��������������";
};

//Class Rhombus

ClassRhombus::ClassRhombus(double a, double A, double B) :ClassParallelogram(a, a, A, B) {
    fig_name = "����";
};

//Class Square
ClassSquare::ClassSquare(double a) : ClassRhombus(a, 90, 90) {
        fig_name = "�������";
 };