// ConsoleApplication29.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<iostream>
using namespace std;
class b
{
public:
	b();
	~b();
 	virtual void f();
private:

};

b::b()
{
}

b::~b()
{
}

void b::f() {
	cout << "This is Base class" << endl;

}




class d :public b
{
public:
	d();
	~d();
	void f();
private:

};

d::d()
{
}

d::~d()
{
}

void d::f() {
	cout << "THis is Derivative" << endl;

}
int main()
{
	b* p;
	b ob1;
	p = &ob1;
	p->f();
	d ob2;
	p = &ob2;
	p->f();


    return 0;
}

