#include <iostream>


class ClassFigure {
protected:
    int sides_count;
    std::string fig_name ;


    ClassFigure(int sides_count, std::string fig_name): sides_count(sides_count), fig_name(fig_name) {    };


 public:
    ClassFigure( ) {
        sides_count = 0;
        fig_name = "Фигура";
    };

    int get_sides_count() {
        return sides_count;
    };

    std::string  get_name() {
        return fig_name;
    }
};

class ClassTriangle : public ClassFigure {
public:

    ClassTriangle():ClassFigure(3, "Треугольник") {
       
    };
};


class ClassQuadrangle : public ClassFigure {
public:

    ClassQuadrangle() :ClassFigure(4, "Четырехугольник") {

    };
};

int main() {

    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли

    std::cout << "Количество сторон : " << std::endl;
    
    ClassFigure ObjFig;
    std::cout <<ObjFig.get_name()<< ": " << ObjFig.get_sides_count()<< std::endl;
   
    ClassTriangle Triangle;
    std::cout << Triangle.get_name() << ": " << Triangle.get_sides_count() <<std::endl;

    ClassQuadrangle Quadrangle;
    std::cout << Quadrangle.get_name() << ": " << Quadrangle.get_sides_count() << std::endl;



    return 0;
}