#pragma once
#include "FigureLibrary.h"

using namespace FigureLibrary;

//  Classes for Triangles'
class Triangle : public Figure {
protected:
    double a{}, b{}, c{}; //стороны
    double A{}, B{}, C{}; //углы

public:

    FIGURELIB_API Triangle(double a, double b, double c, double A, double B, double C);
    FIGURELIB_API virtual void PrintInfo();
};



