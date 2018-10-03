// ConsoleApplication15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Mylist
{
public:
	Mylist();
	~Mylist();
	void Myset(int[]);
	void Myshow();
private:
	int x[2];


};

void Mylist::Myshow() {
	for (int i = 0; i < 2; i++)
		cout<<x[i]<<endl;

}
void Mylist::Myset(int a[]) {

	for (int i = 0; i < 2; i++)
		x[i] = a[i];

}
Mylist::Mylist()
{
}

Mylist::~Mylist()
{
}


class Student
{
public:
	Student();
	~Student();
	void setName();
	void setNum();
	void show();
private:
	int num[2];
	char name[2][5];


};

Student::Student()
{
}

Student::~Student()
{
}

void Student::setName() {

	for (int i = 0; i< 2; i++) {
		cout << "Enter Your names:----->";
		cin .getline( name[i],5);
	}
}


void Student::setNum() {
	for (int i=0; i < 2; i++) {
		cout << "Enter Your numbers:----->";
		cin >> num[i];
	}
}

void Student::show() {
	for (int i = 0; i < 2; i++) {
		cout << name[i] << "=======" << num[i]<<endl;
	}
}
int main()
{

	Student Ob1;
	Ob1.setName();
	Ob1.setNum();
	Ob1.show();
	int b[2] = { 10,15 };
    return 0;
}

