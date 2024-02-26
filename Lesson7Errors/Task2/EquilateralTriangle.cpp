#include "EquilateralTriangle.h"
#include "MyException.h"


// Equilateral
EquilateralTriangle::EquilateralTriangle(double a) : IsoscalestTriangle(a, a, 60, 60) {
    fig_name = "Равносторонний треугольник";
    if ((b != c) && (b != a)) {
        throw MyException("Причина: в равностороннем  треугольнике все стороны должны быть равны ");
    }

};