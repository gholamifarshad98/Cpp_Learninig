// ConsoleApplication20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class MyClass
{
public:
	MyClass();
	void set();
	void show();
	~MyClass();
	int z;
private:
	int x;
	int y;


};

MyClass::MyClass()
{
}

void MyClass::set() {
	cout << "Enter Your X:" << endl;
	cin >> x;
	cout << "Enter Your Y:" << endl;
	cin >> y;
	cout << "Enter Your z:" << endl;
	cin >> z;
}

void MyClass::show() {
	cout << "this is your x:  " << x<<endl;
	cout << "this is your y:  " << y<<endl;

}

MyClass::~MyClass()
{
}

int main()
{
	MyClass ob1;
	MyClass* p;
	p = &ob1;
	p->set();
	p->show();
	int* q;
	q = &ob1.z;
	cout << "Yes this is z:  " << *q<<endl;
    return 0;
}


