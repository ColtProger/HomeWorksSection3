#include "Rhombus.h"
#include "MyException.h"
//Class Rhombus

Rhombus::Rhombus(double a, double A, double B) : Parallelogram(a, a, A, B) {
    fig_name = "Ромб";
    if ((A != C) && (B != D) && (a != b) && (b != c)&&(c!=d)&&(d!=a)) {
        throw MyException("Причина: стороны должны быть равными,  а углы должны быть попарно равныю.");
    }
};