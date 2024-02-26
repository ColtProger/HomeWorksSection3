#include "EquilateralTriangle.h"
#include "MyException.h"


// Equilateral
EquilateralTriangle::EquilateralTriangle(double a) : IsoscalestTriangle(a, a, 60, 60) {
    fig_name = "�������������� �����������";
    if ((b != c) && (b != a)) {
        throw MyException("�������: � ��������������  ������������ ��� ������� ������ ���� ����� ");
    }

};