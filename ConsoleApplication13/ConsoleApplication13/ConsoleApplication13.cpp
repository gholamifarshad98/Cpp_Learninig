// ConsoleApplication13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int* f(int a[], int len1, int b[], int len2, int n);


int main()
{
	int* a;
	int* b;
	a = new int[5]{ 1,200,3,4,5 };
	b = new int[3]{ 10,20,30 };
	int len1 = 5;
	int len2 = 3;
	int* d;
	//d = new int[len1 + len2];
	d= f(a,len1,b,len2,3);
	for (int i = 0; i < len1 + len2; i++) {
		cout << *(d + i) << endl;
	}
	delete[] d;
	delete[] a;
	delete[] b;


 return 0;
}

int* f(int a[], int len1, int b[], int len2, int n) {
	int i, j, k = 0;
	int*c;
	c = new int[len1 + len1];
	for (i = 0; i < n; i++, k++) {
		c[k] = a[i];
	}
	for (j = 0; j < len2; j++, k++) {
		c[k] = b[j];
	}
	for (; i < len1; i++, k++) {
		c[k] = a[i];
	}

	return c;


}











