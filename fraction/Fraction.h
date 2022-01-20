#include <iostream>
#include<fstream>
#pragma once

class Fraction
{
public:
	Fraction() {
		_a = _b = 1;
	};
	Fraction(int a,int b) {
		_a = a;
		_b = b;
	};
	~Fraction();
	int getA() { return _a; }
	int getB() { return _b; }
	void setA(int a) { _a = a; };
	void setB(int b) { _b = b; };
	void toStrig();
	void reduction();
	void getproperfraction();
	Fraction operator+(Fraction obj);
	Fraction operator+(int n);
	friend Fraction operator+(int n,Fraction obj);
	Fraction operator-(Fraction obj);
	Fraction operator*(Fraction obj);
	Fraction operator/(Fraction obj);
	friend std::ostream& operator<<(std::ostream& stream, Fraction& obj);
	friend std::istream& operator>>(std::istream& stream, Fraction& obj);
private:
	int _a;//chislitel
	int _b;//znamenatel

	int _getLCM(int x, int y);//NOK
	int _getGCD(int x, int y);
};

