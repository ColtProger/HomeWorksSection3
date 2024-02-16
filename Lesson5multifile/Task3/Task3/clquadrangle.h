#pragma once
#include "clfigure.h"
class ClassQuadrangle : public ClassFigure {
protected:
    double a{}, b{}, c{}, d{}; //стороны
    double A{}, B{}, C{}, D{}; //углы

public:
    ClassQuadrangle(double a, double b, double c, double d, double A, double B, double C, double D);

    virtual void PrintInfo();
};


//  Class Rectangle
class ClassRectangle : public ClassQuadrangle {

public:
    ClassRectangle(double a, double b, double A);
};


//Class Parallelogram

class ClassParallelogram : public ClassQuadrangle {

public:
    ClassParallelogram(double a, double b, double A, double B);
};

//Class Rhombus

class ClassRhombus : public ClassParallelogram {
public:
    ClassRhombus(double a, double A, double B);
};

//Class Square

class ClassSquare : public ClassRhombus {
public:
    ClassSquare(double a);
};