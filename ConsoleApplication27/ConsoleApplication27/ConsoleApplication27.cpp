// ConsoleApplication27.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class A
{
public:
	A(int);
	~A();
	int i;
private:

};

A::A(int i)
{
	this->i = i;
}

A::~A()
{
}



class B
{
public:
	B(int);
	~B();
protected:
	int j;

private:

};

B::B(int j)
{
	this->j = j;
}

B::~B()
{
}



class C
{
public:
	C(int);
	~C();

private:
	int k;
};

C::C(int k)
{
	this->k = k;
}

C::~C()
{
}

class D : public A,protected B,private C
{
public:
	D(int,int,int,int);
	~D();

private:
	int q;

};

D::D(int i,int j, int k, int q):A(i),B(j),C(k)
{
	this->q = q;
}

D::~D()
{
}




int main()
{
	D ob1(1, 2, 3, 4);
    return 0;
}

