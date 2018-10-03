// ConsoleApplication23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class a
{
public:
	int i;
	a(int i ) {
		this->i = i;
		cout << "constructor of A" << endl;
	};
	~a() {
		cout << "distructor A" << endl;
	};

private:

};


class b :public a
{
public:
	int j ;
	b(int j) :a(j){
		cout << "constructor of B" << endl;
		this->j = j;

	};
	~b() {
		cout << "distructor B" << endl;
	};

private:

};







int main()
{
	a ob1(1);
	cout << "----------------" << endl;
	b ob2(2);
	cout << "----------------" << endl;
	b ob3(3);
	cout << "----------------" << endl;
	cout << "this is int i in bo3: "<<ob3.i<<endl;
	cout << "this is int j in bo3: " << ob3.j << endl;
	cout << "++++++++++++++++++++++++++++" << endl;
	ob1 = ob3;
	cout << "this is int i in bo3: " << ob3.i << endl;
	cout << "this is int j in bo3: " << ob3.j << endl;
	cout << "++++++++++++++++++++++++++++" << endl;
	
	return 0;
}

