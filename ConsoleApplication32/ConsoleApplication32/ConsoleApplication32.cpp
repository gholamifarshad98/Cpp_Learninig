// ConsoleApplication32.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class MyClass
{
public:
	MyClass(int,int);
	~MyClass();
	int operator==(MyClass);
private:
	int x;
	int y;
};

MyClass::MyClass(int a, int b):x(a),y(b)
{
}

MyClass::~MyClass()
{
}
int MyClass:: operator==(MyClass a) {
	if (x == a.x& y == a.y) {
		return 1;
	}
	else
	{
		return 0;
	}
	}



int main()
{
	MyClass ob1(1, 2);
	MyClass bo2(3, 4);
	cout << (ob1 == bo2);

    return 0;
}

