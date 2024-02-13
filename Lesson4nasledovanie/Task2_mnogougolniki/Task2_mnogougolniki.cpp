#include <iostream>


class ClassFigure {
protected:
    
    std::string fig_name;

public:

    virtual void PrintInfo() {
        std::cout << fig_name << ": " << std::endl;
    }

    
};

void print_info(ClassFigure* figure) {
    figure->PrintInfo();
    std::cout << "\n";

}


//  Classes for Triangles
class ClassTriangle : public ClassFigure {
protected:
    double a{}, b{}, c{}; //стороны
    double A{}, B{}, C{}; //углы

public:

    ClassTriangle(double a, double b, double c,  double A, double B, double C) : a(a), b(b), c(c), A(A), B(B), C(C) {
        fig_name = "Треугольник";

    };
    virtual void PrintInfo() {
        std::cout << fig_name << ": " << std::endl;
        std::cout << "Стороны: a= " << a << ", b= " << b << ", c = " << c  << std::endl;
        std::cout << "Углы: A = " << A << ", B = " << B << ", C = " << C << std::endl;

    }
};

class ClassRightTriangle : public ClassTriangle {
public:

    ClassRightTriangle(double a, double b, double c, double A, double B) : ClassTriangle(a, b, c, A, B, 90) {
        fig_name = "Прямоугольный треугольник";

    };
    void PrintInfo() {
        ClassTriangle::PrintInfo();
    };
};

class ClassIsoscalestTriangle : public ClassTriangle {
public:

    ClassIsoscalestTriangle(double a, double b, double A, double B) : ClassTriangle(a, b, b, A, B, B) {
        fig_name = "Равнобедренный треугольник";

    };
    void PrintInfo() {
        ClassTriangle::PrintInfo();
    };
};



// Equilateral
class ClassEquilateralTriangle : public ClassIsoscalestTriangle {
public:

    ClassEquilateralTriangle(double a) : ClassIsoscalestTriangle(a, a, 60, 60) {
        fig_name = "Равносторонний треугольник";

    };
    void PrintInfo() {
        ClassTriangle::PrintInfo();
    };
};


//  Classes for Quadrangles
class ClassQuadrangle : public ClassFigure {
protected:
    double a{}, b{}, c{}, d{}; //стороны
    double A{}, B{}, C{}, D{}; //углы

public:
    ClassQuadrangle(double a, double b, double c, double d, double A, double B, double C, double D) : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
        fig_name = "Четырехугольник";
    }

    virtual void PrintInfo() {
        std::cout << fig_name << ": " << std::endl;
        std::cout << "Стороны: a= " << a << ", b= " << b << ", c = " << c << ", d = " << d << std::endl;
        std::cout << "Углы: A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << std::endl;
    }
};


//  Class Rectangle
class ClassRectangle : public ClassQuadrangle {

public:
    ClassRectangle(double a, double b, double A) : ClassQuadrangle(a, b, a, b, 90, 90, 90, 90) {
        fig_name = "Прямоугольник";
    }

    void PrintInfo() {
        ClassQuadrangle::PrintInfo();
    };

};



//Class Parallelogram

class ClassParallelogram : public ClassQuadrangle {

public:
    ClassParallelogram(double a, double b, double A, double B) : ClassQuadrangle(a, b, a, b, A, B, A, B) {
        fig_name = "Параллелограмм";
    }

    void PrintInfo() {
        ClassQuadrangle::PrintInfo();
    };
};

//Class Rhombus

class ClassRhombus : public ClassParallelogram {
public:
    ClassRhombus(double a, double A, double B) :ClassParallelogram(a, a, A, B) {
        fig_name = "Ромб";
    }

    void PrintInfo() {
        ClassParallelogram::PrintInfo();
    };
};

//Class Square

class ClassSquare : public ClassRhombus {
public:
     ClassSquare(double a) : ClassRhombus(a, 90, 90) {
        fig_name = "Квадрат";
    }

     void PrintInfo() {
         ClassRhombus::PrintInfo();
     };
};


int main() {

    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли

    ClassTriangle Triangle(3, 7, 5, 70, 40, 50);
    print_info(&Triangle);

    ClassRightTriangle RightTriangle(3, 4, 5, 40, 50);
    print_info(&RightTriangle);

    ClassIsoscalestTriangle IsoTriangle(3, 15, 40, 100);
    print_info(&IsoTriangle);

    ClassEquilateralTriangle EquiTriangle(7);
    print_info(&EquiTriangle);
    
    ClassQuadrangle Quadrangle(2,3,4,5,40,50,60,70);
    print_info(&Quadrangle);

    ClassParallelogram Parallelogram(2, 5, 80, 100);
    print_info(&Parallelogram);

    ClassRectangle Rectangle(2, 5,90);
    print_info(&Rectangle);

    ClassRhombus Rhombus(4, 60, 120);
    print_info(&Rhombus);

    ClassSquare Square(4);
    print_info(&Square);


    



    return 0;
}