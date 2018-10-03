// ConsoleApplication26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A
{
public:
	A(int );
	~A();
	double sq();
private:
	int i;

};

A::A(int i)
{
	this->i = i;
}

A::~A()
{
}

double A::sq() {
	return i*i;
}
class B:private A
{
public:
	B(int);
	~B();
	void Show();
private:
	int j = 6;

};

B::B(int k):A(k)
{
}

B::~B()
{
}

void B::Show() {
	cout << sq() << endl;
}


int main()
{
	B ob1(2);
	ob1.Show();
    return 0;
}

