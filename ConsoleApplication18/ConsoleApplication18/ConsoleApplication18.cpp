// ConsoleApplication18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class Sqr;
class Rect
{
public:
	Rect(int a, int b) :x(a), y(b) {};
	Rect();
	~Rect();
	int Area();
	friend void Disp(Rect, Sqr);
private:
	int x;
	int y;

};

Rect::Rect()
{
}

Rect::~Rect()
{
}
int Rect::Area() {
	return x*y;
}





class Sqr
{
public:
	Sqr(int a):x(a) {};
	Sqr();
	~Sqr();
	int Area();
	friend void Disp(Rect, Sqr);
private:
	int x;
};

Sqr::Sqr()
{
}

Sqr::~Sqr()
{
}
int Sqr::Area() {
	return x*x;
}


void Disp(Rect ob1, Sqr ob2) {
	cout << ob1.Area() << "-------" << ob2.Area()<<endl;
}




class Cub
{
public:
	Cub(int a, int b, int c) :x(a), y(b), z(c) {};
	Cub();
	~Cub();
	static void f(int);
	int Area();
private:
	int x;
	int y;
	int z;
	static int alpha;

};
int Cub::alpha = 6;
void Cub::f(int aa) {
	alpha = aa;
	
}
int Cub::Area() {
	return alpha*x*y*z;
}
Cub::Cub()
{
}

Cub::~Cub()
{
}

int main()
{
	Cub ob1(1, 1,1);
	cout<<ob1.Area()<<endl;

	Cub::f(7);
	Cub ob2(1, 1, 1);
	cout<<ob2.Area()<<endl;
    return 0;
}

