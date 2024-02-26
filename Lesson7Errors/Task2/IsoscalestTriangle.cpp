#include "IsoscalestTriangle.h"
#include "MyException.h"

IsoscalestTriangle::IsoscalestTriangle(double a, double b, double A, double B) : Triangle(a, b, b, A, B, B) {
    fig_name = "Равнобедренный треугольник";
   if ((b != c) && (B != C)) {
       throw MyException("Причина: в равнобедренном треугольнике должны быть равны стороны b и с и углы B и С. ");
   }
};

