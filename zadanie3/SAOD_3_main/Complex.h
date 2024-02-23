#pragma once

#include <iostream>
#include <cmath>

using namespace std;


class Complex
{

public:
	double Re, Im;
	Complex(double re = 0, double im = 0) {
		Re = re;
		Im = im;
	}

	// операторы

	Complex operator + (const Complex& c) const {
		return Complex(Re + c.Re, Im + c.Im);
	}

	Complex operator - (const Complex& c) const {
		return Complex(Re - c.Re, Im - c.Im);
	}
	Complex operator * (const Complex& c) const {
		//(x + yi)(z + ki) = xz + (xk+yz)i - ky
		return Complex(Re * c.Re - Im * c.Im, Im * c.Re + Re * c.Im);
	}
	Complex operator / (const Complex& c) const {
		double re = (Re * c.Re + Im * c.Im) / (c.Re * c.Re + c.Im * c.Im);
		double im = (Im * c.Re - Re * c.Im) / (c.Re * c.Re + c.Im * c.Im);
		return Complex(re, im);
	}

	// методы

	inline Complex Conjugate() const {
		return Complex(Re, -Im);
	}

	inline double Mod() const {
		return sqrt(Re * Re + Im * Im);
	}

	inline double Arg() const {
		if (Mod() == 0)
		{
			return 0;
		}
		else if (Re > 0) {
			return atan(Im / Re);
		}
		else if (Re < 0) {
			double res = acos(-1) + atan(Im / Re);
			return Im >= 0 ? res : -res;
		}
		else {
			double res = acos(0);
			return Im > 0 ? res : -res;
		}
	}
};

inline ostream& operator << (ostream& o, const Complex& c) {
	return o << "(" << c.Re << (c.Im >= 0 ? "+" : "") << c.Im << "i)";
}

