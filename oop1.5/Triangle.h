//Triangle.h
#pragma once
#include <cmath>
#include "Triad.h"


#define PI 3.14159265

using namespace std;
class Triangle
{
private:
	Triad triad;
public:
    double GetArea();
    double GetAlpha();
    double GetBeta();
    double GetGamma();

    void Init(double a, double b, double c);
    void Display()const;
    void Read();
    string ToString()const;
};