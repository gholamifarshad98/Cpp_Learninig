// ConsoleApplication16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream> 
#define PI 1
using namespace std;

class MyCircle
{
public:
	MyCircle();
	MyCircle(int, int);
	MyCircle(int);
	MyCircle(MyCircle &);
	~MyCircle();
	void SetX(int );
	void SetY(int);
	void SetR(int);
	double GetArea();
	double GetCirconf();
	int GetDim();
private:

	int r;
	int x,y,z;

};

MyCircle::MyCircle()
{
	 x = 1;
	 y = 1;
	 r = 1;
	cout << "Defult constructor is run" << endl;
}
MyCircle::MyCircle(int a, int b) {
	cout << "Parametric Constructor is run" << endl;
	 r = 1;
	 x = a;
	 y = b;
}
MyCircle::MyCircle(int a):r(a) {
	 x = 1;
	 y = 1;
	cout << "Parametric constructor with R is run" << endl;
}

MyCircle::MyCircle(MyCircle& ob) {
	x = ob.x + 1;
	y = ob.y + 1;
	r = ob.r + 1;

}

MyCircle::~MyCircle()
{
	cout << "Distructor is run" << endl;
}


void MyCircle::SetR(int a) {
	r = a;
}

void MyCircle::SetX(int a) {
	x = a;
}

void MyCircle::SetY(int a) {
	y = a;
}

double MyCircle::GetArea() {
	return 1*r*r;
}

double MyCircle::GetCirconf() {
	return 2 * PI*r;
}

int MyCircle::GetDim() {
	return 2 * r;
}


int main()
{
	MyCircle ob1;

	cout << ob1.GetArea()<<endl;

    return 0;
}

