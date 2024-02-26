#include "RightTriangle.h"
#include "MyException.h"

RightTriangle::RightTriangle(double a, double b, double c, double A, double B, double С) :Triangle(a, b, c, A, B, С) {
    fig_name = "Прямоугольный треугольник";
    if ((A !=90)&&(B!=90)&&(C != 90)){
        throw MyException("Причина: в прямоугольном треугольнике должен быть угол 90");
    }

}

void RightTriangle::PrintInfo() {
    Triangle::PrintInfo();
};