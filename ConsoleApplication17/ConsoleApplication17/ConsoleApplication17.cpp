// ConsoleApplication17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class MyClass
{
public:
	MyClass( int b) :y(b) {};
	~MyClass();
	void setX(int);
	int getX();
	void static f(int a) {
		x = a;
	}

private:
	int y;
	int static x;

};

int MyClass::x = 1;


void MyClass::setX(int a) {
	x = a;
}
int MyClass::getX() {
	return x;
}
MyClass::~MyClass()
{
}


int main()
{

	MyClass ob1(1);
	cout <<ob1.getX() <<endl;
	ob1.setX(3);
	MyClass ob2(2);
	cout << ob2.getX() << endl;
	MyClass::f(6);
	cout << ob2.getX() << endl;


    return 0;
}

