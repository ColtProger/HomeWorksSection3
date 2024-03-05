#pragma once
#include "Figure.h"
class Quadrangle : public Figure {
protected:
    double a{}, b{}, c{}, d{}; //стороны
    double A{}, B{}, C{}, D{}; //углы

public:
    Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D);

    virtual void PrintInfo();
};

