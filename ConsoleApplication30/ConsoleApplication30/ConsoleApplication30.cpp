// ConsoleApplication30.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class a
{
public:
	a();
	~a();
	virtual void f();
private:

};

a::a()
{
}

a::~a()
{
}
void a::f() {
	cout << "This is a" << endl;
}

class b :public a
{
public:
	b();
	~b();
	void f();
private:

};

b::b()
{
}

b::~b()
{
}

void b::f() {
	cout << "this is b" << endl;

}

class c: public b
{
public:
	c();
	~c();
	void f();
private:

};

c::c()
{
}

c::~c()
{
}

void c::f() {
	cout << "this is c" << endl;
}

int main()
{
	a* p;
	c ob1;
	p = &ob1;
	p->f();
    return 0;
}

