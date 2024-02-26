//  Class Rectangle
#include "Rectangle.h"
#include "MyException.h"
Rectangle::Rectangle(double a, double b, double A) : Quadrangle(a, b, a, b, A, A, A, A) {
    fig_name = "Прямоугольник";
    if ((A != 90) && (B != 90)&& (C != 90) && (D != 90) && (a != c) && (b != d)) {
        throw MyException("Причина: стороны должны быть попарно равныю, а все углы быть равными 90.");
    }
};

