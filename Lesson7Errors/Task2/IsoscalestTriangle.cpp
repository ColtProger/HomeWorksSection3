#include "IsoscalestTriangle.h"
#include "MyException.h"

IsoscalestTriangle::IsoscalestTriangle(double a, double b, double A, double B) : Triangle(a, b, b, A, B, B) {
    fig_name = "�������������� �����������";
   if ((b != c) && (B != C)) {
       throw MyException("�������: � �������������� ������������ ������ ���� ����� ������� b � � � ���� B � �. ");
   }
};

