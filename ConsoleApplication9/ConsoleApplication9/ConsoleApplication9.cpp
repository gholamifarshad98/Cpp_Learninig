// ConsoleApplication9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int cube(int);
int squr(int);


int f(int(* )(int ), int );
int main()
{
	int a = 5;
	cout<<f(cube, a)<<endl;
}

int cube(int a) {

	return a*a*a;
}

int squr(int a) {
	return a*a;
}

int f(int (*p)(int a),int c) {
	int sum = 0;
	for (int i = 0; i < c; i++) {
		sum = sum + p(i);
	}
	return sum;
}



