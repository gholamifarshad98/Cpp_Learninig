// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main() {
	int n;;
	int* p;
	cin >> n;
	p = new int[n];
	int i;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		*(p + i) = x;
	}
}