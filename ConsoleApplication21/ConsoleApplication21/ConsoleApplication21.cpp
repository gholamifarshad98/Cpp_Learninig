// ConsoleApplication21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class sqr
{
public:
	sqr(int a) :x(a) {};
	sqr();
	~sqr();
	int Area();
	void set(int);
	friend int f(sqr);
private:
	int x;

};

sqr::sqr()
{
}

sqr::~sqr()
{
}

int sqr::Area() {
	return x*x;
}

void sqr::set(int a) {
	x = a;
}

int f(sqr a) {
	return a.x;
}
int main()
{
	sqr ob1;
	ob1.set(5);
	int (sqr::*p)();
	p = &sqr::Area;
	cout << f(ob1) << endl;
	cout<<(ob1.*p)()<<endl;

    return 0;
}

