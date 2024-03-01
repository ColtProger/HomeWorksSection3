#pragma once

#include <iostream>


class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator);

	Fraction reduction(); 

	Fraction operator-(); 
		
	Fraction operator++(); 

	Fraction operator++(int);
	

	Fraction operator--();

	Fraction operator--(int);
	
	Fraction operator+(Fraction other);

	Fraction operator-(Fraction other);
	
	Fraction operator*(Fraction other);
	

	Fraction operator/(Fraction other);
	
	friend std::ostream& operator<<(std::ostream& left, Fraction right);

};


//std::ostream& operator<<(std::ostream& left, Fraction right) {
//
//	return std::cout << right.numerator_ << "/" << right.denominator_;
//}