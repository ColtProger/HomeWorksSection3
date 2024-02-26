//  Class Rectangle
#include "Parallelogram.h"
#include "MyException.h"

//Class Parallelogram
Parallelogram::Parallelogram(double a, double b, double A, double B) : Quadrangle(a, b, a, b, A, B, A, B) {
    fig_name = "Параллелограмм";
    if ((A != C)&& (B!=D)&&(a!=c)&&(b!=d)) {
        throw MyException("Причина: стороны и углы должны быть попарно равныю.");
    }
};