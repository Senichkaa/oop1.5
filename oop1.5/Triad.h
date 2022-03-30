//Triad.h
#pragma once
#include <cmath>
#include <sstream>

using namespace std;

class Triad
{
private:
	double a;
	double b;
	double c;
public:
	double GetA() const {return a; }
	double GetB() const { return b; }
	double GetC() const { return c; }
	void SetA(double a) { this->a = a; }
	void SetB(double b) { this->b = b; }
	void SetC(double c) { this->c = c; }
	double GetSum();

	void Init(double a, double b, double c);
	void Display()const;
	void Read();
	
	string ToString()const;
};