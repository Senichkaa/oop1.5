//Triad.cpp
#include "Triad.h"
#include <iostream>
#include <sstream>

using namespace std;

void Triad::Init(double a, double b, double c)
{
	SetA(a);
	SetB(b);
	SetC(c);
}
void Triad::Display()const
{
	cout << ToString() << endl;
}
void Triad::Read() 
{
	double a;
	double b;
	double c;
	cout << endl;
	cout << "a = ? "; cin >> a;
	cout << "b = ? "; cin >> b;
	cout << "c = ? "; cin >> c;
	Init(a, b, c);
}
string Triad::ToString()const
{
	stringstream m;
	m << a << "," << b << "," << c;
	return m.str();
}
double Triad::GetSum()
{
	return (a + b + c);
}