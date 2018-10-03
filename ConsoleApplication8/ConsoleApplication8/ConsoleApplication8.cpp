// ConsoleApplication8.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;
int f(int);
	int g(int);


int main()
{
	//int a[5] = {1,2,3,4,5};
	//int b[5] = { 9,8,7,6,5 };
	//int *p[] = {a,b};
	//cout << *(p[1] + 1) << endl;
	//cout << *(p[0] + 2) << endl;
	//cout << *(*(p+1)+1)<<endl;


	//int c[2][3] = { {1,2,3},{4,5,6} };
	//int (*pc)[3];
	//pc = c;
	//cout << sizeof(pc)<<endl;
	//cout << *(pc[1] )<<endl;

	int(*p)(int);
	p = g;
	cout << p(5) << endl;


    return 0;
}

int f(int x) {
	return x*x;
}


int g(int x) {
	return x*x*x;
}