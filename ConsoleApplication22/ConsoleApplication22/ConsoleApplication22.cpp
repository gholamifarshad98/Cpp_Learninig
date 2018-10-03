// ConsoleApplication22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class MyClass
{
public:
	MyClass();
	~MyClass();
	MyClass* f();
private:
	int x;
	int y;
};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}
MyClass* MyClass::f() {
	return this;
}
int main()
{
	MyClass ob1;
	cout << &ob1 << endl;
	cout << ob1.f() << endl;
    return 0;
}

