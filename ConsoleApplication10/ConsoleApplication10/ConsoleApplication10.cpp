// ConsoleApplication10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int prod(int* , int* );
int sum(int* , int* );

int main()
{
	int* a;
	int* b;
	a = new int(3);
	b = new int(8);

	cout << sum( a,b)<<endl ;
	delete a;
	delete b;

	
    return 0;
	
}


int sum(int* a, int* b) {
	return *a + *b;
}

int prod(int* a, int* b) {
	return *a * *b;
}
