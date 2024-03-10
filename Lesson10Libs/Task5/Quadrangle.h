#pragma once
#include "FigureLibrary.h"

using namespace FigureLibrary;

class Quadrangle : public Figure {
protected:
    double a{}, b{}, c{}, d{}; //�������
    double A{}, B{}, C{}, D{}; //����

public:
    FIGURELIB_API Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D);

    FIGURELIB_API virtual void PrintInfo();
};

