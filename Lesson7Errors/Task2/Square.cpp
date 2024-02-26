#include "Square.h"
#include "MyException.h"
//Class Square
Square::Square(double a) : Rhombus(a, 90, 90) {
    fig_name = "Квадрат";
    if ((A != 90) && (B != 90) && (a != b) && (b != c) && (c != d) && (d != a)) {
        throw MyException("Причина: стороны должны быть равными,  а углы должны быть  равны 90.");
    }
};