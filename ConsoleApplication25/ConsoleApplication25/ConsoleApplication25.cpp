// ConsoleApplication25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#define PI 3.141516
class Circle
{
public:
	Circle(int r);
	~Circle();
	double Area();

private:
	int r;
};

double Circle::Area() {
	return PI*r*r;
}

Circle::Circle(int r)
{
	this->r = r;
}

Circle::~Circle()
{
}


class Cylinder: protected Circle
{
public:
	Cylinder(int ,int );
	~Cylinder();
	double Vol();
	int& f();
private:
	int h;

};
int& Cylinder::f() {
	return h;
}
Cylinder::Cylinder(int r,int h):Circle(r)
{
	this->h=h;

}

Cylinder::~Cylinder()
{
}
double Cylinder::Vol() {
	return h*Area();
}

int main()
{
	Cylinder ob1(1, 1);
	//cout<<"THis is Area: "<<ob1.Area()<<endl;
	cout << "THis is Vol: " << ob1.Vol() << endl;
	ob1.f() = 5;
	cout << "THis is Vol: " << ob1.Vol() << endl;

	
    return 0;
}

