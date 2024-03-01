#include "Fraction.h"


	Fraction::Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	Fraction Fraction::reduction() {
		int reductor = 1;

		if ((numerator_ % 10 == 0) && (denominator_ % 10 == 0)) {
			this->numerator_ = numerator_ / 10;
			this->denominator_ = denominator_ / 10;
		}

		for (int i = 2; i <= 9; i++) {
			if ((numerator_ % i == 0) && (denominator_ % i == 0)) {
				reductor = i;
			}
		}

		this->numerator_ = numerator_ / reductor;
		this->denominator_ = denominator_ / reductor;

		return Fraction(numerator_, denominator_);
	}



	Fraction Fraction::operator-() {
		numerator_ = (-1) * numerator_;
		denominator_ = denominator_;
		return *this;
	}

	Fraction Fraction::operator++() {
		numerator_ = numerator_ + denominator_;
		denominator_ = denominator_;
		Fraction temp = *this;
		return temp.reduction();

	}

	Fraction Fraction::operator++(int)
	{
		Fraction temp = *this;
		++(*this);
		return temp.reduction();
	}

	Fraction Fraction::operator--() {
		numerator_ = numerator_ - denominator_;
		denominator_ = denominator_;
		Fraction temp = *this;
		return temp.reduction();

	}

	Fraction Fraction::operator--(int)
	{
		Fraction temp = *this;
		--(*this);
		return temp.reduction();
	}

	Fraction Fraction::operator+(Fraction other)
	{
		int numerator = numerator_ * other.denominator_ + other.numerator_ * denominator_;
		int denominator = denominator_ * other.denominator_;
		return Fraction(numerator, denominator).reduction();
	}

	Fraction Fraction::operator-(Fraction other)
	{
		int numerator = numerator_ * other.denominator_ - other.numerator_ * denominator_;
		int denominator = denominator_ * other.denominator_;
		return Fraction(numerator, denominator).reduction();
	}

	Fraction Fraction::operator*(Fraction other)
	{
		int numerator = numerator_ * other.numerator_;
		int denominator = denominator_ * other.denominator_;
		return Fraction(numerator, denominator).reduction();
	}

	Fraction Fraction::operator/(Fraction other)
	{
		int numerator = numerator_ * other.denominator_;
		int denominator = denominator_ * other.numerator_;
		return Fraction(numerator, denominator).reduction();
	}

	
std::ostream& operator<<(std::ostream& left, Fraction right) {

	return std::cout << right.numerator_ << "/" << right.denominator_;
}