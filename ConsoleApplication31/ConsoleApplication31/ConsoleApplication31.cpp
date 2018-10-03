// ConsoleApplication31.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class shape
{
public:
	shape();
	~shape();
	virtual double getArea() const { return 0; }
	virtual double getVol() const { return 0; }
	virtual void print() const= 0;
	virtual string getName() const = 0;
private:
	
};

shape::shape()
{
}

shape::~shape()
{
}


class point:public shape
{
public:
	point(double,double);
	~point();
	void setX(double);
	void setY(double);
	double getX()const;
	double getY()const;
	virtual void print()const;
	virtual string getName()const;
private:
	int x;
	int y;
};

point::point(double a, double b):x(a),y(b)
{
}

point::~point()
{
}
void point::setX(double x) {
	this->x = x;
}
void point::setY(double y) {
	this->y = y;
}

double point::getX()const { return x; }
double point::getY()const { return y; }
string point::getName()const { return "Point"; }
void point::print()const { cout << "[" << getX() << "," << getY() << "]" << endl; }


class circle:public point
{
public:
	circle(double, double, double);
	~circle();
	virtual void print()const;
	virtual double getArea()const;
	virtual string getName()const;
	double r;
private:
	
};

circle::circle(double x, double y, double r) :point(x,y)
{
	this->r=r;
}

circle::~circle()
{
}
double circle::getArea()const{
	return 3.14*r*r;
}
string circle::getName() const{
	return "Circle ";
}


void circle::print() const{
	
	cout<< "this is my " << this->getName() << "at";
	point::print();
}




class cylinder:public circle
{
public:
	cylinder(double,double,double,double);
	~cylinder();
	virtual double getVol()const;
	virtual string getName()const;
	virtual void print()const;
	double h;
private:
	
};

cylinder::cylinder(double x, double y, double r, double h):circle(x,y,r)
{
	this->h = h;
}

cylinder::~cylinder()
{
}
string cylinder::getName()const {
	return "cylinder";
}

void cylinder::print()const {
	cout << "this is" << getName();
}

double cylinder::getVol()const {
	return 3.14*r*r*h;
}
int main()
{
	shape* p;
	point ob2(2, 4);
	circle ob3(2,3,5);
	cylinder ob4(1, 1, 1, 1);
	p = &ob3;
	p -> print();
	vector <shape* >Total(3);
	Total[0] = &ob2;
	Total[2] = &ob3;
    return 0;
}

