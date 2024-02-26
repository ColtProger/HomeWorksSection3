#include "RightTriangle.h"
#include "MyException.h"

RightTriangle::RightTriangle(double a, double b, double c, double A, double B, double �) :Triangle(a, b, c, A, B, �) {
    fig_name = "������������� �����������";
    if ((A !=90)&&(B!=90)&&(C != 90)){
        throw MyException("�������: � ������������� ������������ ������ ���� ���� 90");
    }

}

void RightTriangle::PrintInfo() {
    Triangle::PrintInfo();
};