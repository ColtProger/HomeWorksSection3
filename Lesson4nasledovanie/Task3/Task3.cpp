#include <iostream>


class ClassFigure {
protected:

    std::string fig_name = "Фигура";
    int sides_count = 0;
    bool result = false;

public:

    virtual bool check() {
         return result;
    }

    virtual void PrintInfo() {
        std::cout << fig_name << ": " << std::endl;
        if (check()) {
            std::cout << "Фигура задана корректно" << std::endl;
        }
        else {
            std::cout << "Фигура задана некорректно" << std::endl;
        }
        std::cout << "Количество сторон: " << sides_count << std::endl;
       
    };


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

    ClassTriangle(double a, double b, double c, double A, double B, double C) : a(a), b(b), c(c), A(A), B(B), C(C) {
        fig_name = "Треугольник";
        sides_count = 3;

    };

    bool check() override {
        if ((A + B + C) == 180) {
            result = true;
        }
        else {
            result = false;
        }
        return result;
    }
    void PrintInfo() override {
        ClassFigure::PrintInfo();
        std::cout << "Стороны: a= " << a << ", b= " << b << ", c = " << c << std::endl;
        std::cout << "Углы: A = " << A << ", B = " << B << ", C = " << C << std::endl;
        std::cout << "\n";
    }
};

class ClassRightTriangle : public ClassTriangle {
public:

    ClassRightTriangle(double a, double b, double c, double A, double B) : ClassTriangle(a, b, c, A, B, 90) {
        fig_name = "Прямоугольный треугольник";
       
    };

    bool check() override {
        if (C  == 90) {
            ClassTriangle::check();
           // result = true;
        }
        else {
            result = false;
        }
        return result;
    };

    void PrintInfo() {
        ClassTriangle::PrintInfo();
    };
};

class ClassIsoscalestTriangle : public ClassTriangle {
public:

    ClassIsoscalestTriangle(double a, double b, double A, double B) : ClassTriangle(a, b, a, A, B, A) {
        fig_name = "Равнобедренный треугольник";
        
    };

    bool check() override {
        if ((a == c)&&(A == C)) {
            ClassTriangle::check();
        }
        else {
            result = false;
        }
        return result;
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

    bool check() override {
        if ((a == c) && (a == b)) {
            ClassTriangle::check();
        }
        else {
            result = false;
        }
        return result;
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
        sides_count = 4;
    }
    bool check() override {
        if (((A + B + C + D) == 360)&& (sides_count == 4)) {
            result = true;
        }
        else {
            result = false;
        }
        return result;
    }

    void PrintInfo() override {
        ClassFigure::PrintInfo();
        
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
    bool check() override {
        if ((a==c) && (b == d)&& (A==90) && (B == 90) && (C == 90) && (D == 90)) {
            ClassQuadrangle::check();
        }
        else {
            result = false;
        }
        return result;
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

    bool check() override {
        if ((a == c) && (b == d) && (A == C) && (B == D)) {
            ClassQuadrangle::check();
        }
        else {
            result = false;
        }
        return result;
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

    bool check() override {
        if (c == d) {
            ClassParallelogram::check();
        }
        else {
            result = false;
        }
        return result;
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

    bool check() override {
        if ((A == 90) && (B == 90)) {
            ClassRhombus::check();
        }
        else {
            result = false;
        }
        return result;
    }

    void PrintInfo() {
        ClassRhombus::PrintInfo();
    };
};


int main() {

    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли

    
    ClassFigure Fig;
    print_info(&Fig);

    ClassFigure* tr = new ClassTriangle(3, 7, 5, 70, 40, 50);
        tr->PrintInfo();
        delete tr;

     ClassTriangle* Rtr = new ClassRightTriangle(3, 4, 5, 70, 40);
     Rtr->PrintInfo();
     delete Rtr;

     ClassTriangle* Rtr2 = new ClassRightTriangle(3, 4, 5, 50, 40);
     Rtr2->PrintInfo();
     delete Rtr2;

     ClassTriangle* Isotr = new ClassIsoscalestTriangle(3, 9, 40, 40);
     Isotr->PrintInfo();
     delete Isotr;

     ClassTriangle* Isotr2 = new ClassIsoscalestTriangle(3, 11, 20, 140);
     Isotr2->PrintInfo();
     delete Isotr2;

     
    ClassEquilateralTriangle EquiTriangle(7);
    print_info(&EquiTriangle);

    ClassQuadrangle Quadrangle(2, 3, 4, 5, 40, 50, 60, 70);
    print_info(&Quadrangle);

    ClassParallelogram Parallelogram(2, 5, 50, 100);
    print_info(&Parallelogram);

    ClassRectangle Rectangle(2, 5, 90);
    print_info(&Rectangle);

    ClassRhombus Rhombus(4, 30, 120);
    print_info(&Rhombus);

    ClassSquare Square(6);
    print_info(&Square);






    return 0;
}