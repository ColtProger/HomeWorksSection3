#pragma once
#include "clfigure.h"
//  Classes for Triangles
class ClassTriangle : public ClassFigure {
protected:
    double a{}, b{}, c{}; //стороны
    double A{}, B{}, C{}; //углы

public:

    ClassTriangle(double a, double b, double c, double A, double B, double C);
    virtual void PrintInfo();
};

class ClassRightTriangle : public ClassTriangle {
public:

    ClassRightTriangle(double a, double b, double c, double A, double B);
};

class ClassIsoscalestTriangle : public ClassTriangle {
public:

    ClassIsoscalestTriangle(double a, double b, double A, double B);
};



// Equilateral
class ClassEquilateralTriangle : public ClassIsoscalestTriangle {
public:

    ClassEquilateralTriangle(double a);
};
