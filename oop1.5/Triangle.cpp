//Triangle.cpp
#include <iostream>
#include "Triangle.h"

using namespace std;

void Triangle::Init(double a, double b, double c)
{
	triad.SetA(a);
	triad.SetB(b);
	triad.SetC(c);
}

void Triangle::Display() const
{
	cout << triad.ToString() << endl;
}

void Triangle::Read()
{
	double a;
	double b;
	double c;
	cout << endl;
	cout << "a = ? "; cin >> a;
	cout << "b = ? "; cin >> b;
	cout << "c = ? "; cin >> c;
	triad.Init(a, b, c);
}

string Triangle::ToString() const
{
	stringstream sout;
	triad.ToString();
	return ToString();
}

double Triangle::GetArea()
{
	double p = triad.GetSum() / 2.0;
	return sqrt(p * (p - triad.GetA()) * (p - triad.GetB()) * (p - triad.GetC()));
}

double Triangle::GetAlpha()
{
	return 180.0 - GetGamma() - GetBeta();
}

double Triangle::GetBeta()
{
	return asin(2.0 * GetArea() / (triad.GetC() * triad.GetA())) * 180 / PI;
}

double Triangle::GetGamma()
{
	return acos((triad.GetC() * triad.GetC() - triad.GetA() * triad.GetA() - triad.GetB() * triad.GetB()) /
		(-2.0 * triad.GetA() * triad.GetB())) * 180 / PI;
}

