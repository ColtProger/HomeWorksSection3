#pragma once
#include "Figure.h"
//  Classes for Triangles
class Triangle : public Figure {
protected:
    double a{}, b{}, c{}; //�������
    double A{}, B{}, C{}; //����

public:

    Triangle(double a, double b, double c, double A, double B, double C);
    virtual void PrintInfo();
  };



