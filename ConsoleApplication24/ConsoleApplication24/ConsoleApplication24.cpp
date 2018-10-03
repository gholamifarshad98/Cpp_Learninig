// ConsoleApplication24.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#define PI 3.141516

using namespace std;

class Circle
{
public:
	Circle(double r);
	~Circle();
	double Area();
private:
	double r;

};

Circle::Circle(double r)
{
	this->r = r;
}

Circle::~Circle()
{
}
double Circle::Area(){
	return PI*r*r;
}


class Cylinder :public Circle
{
public:
	Cylinder(double h,double r);

	~Cylinder();
	double Vol();
private:
	double h;

};

Cylinder::Cylinder(double h,double r):Circle(r){
	this->h = h;
}


Cylinder::~Cylinder()
{
}

double Cylinder::Vol() {
	return h*Area();
}

int main()
{
    return 0;
}

