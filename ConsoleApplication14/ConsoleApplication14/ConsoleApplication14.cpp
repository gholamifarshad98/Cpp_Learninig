// ConsoleApplication14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int& mymin(int &, int&);
int main()
{
	int x = 3;
	int y = 5;
	++mymin(x, y);
	cout << x << endl;

}
int& mymin(int & a, int& b) {
	return a < b ? a : b;

}