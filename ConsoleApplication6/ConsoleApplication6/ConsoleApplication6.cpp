// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
void Mysort(int input[], int c);
int main()
{

	int a[11] = {8,3,6,7,1,5,8,3,5,8,9};
	Mysort(a, 11);


    return 0;
}

void Mysort(int input[], int c) {

	for (int i = 0; i < c - 1; i++) {
		for (int j = 1; j < c;j++) {
			if (input[j] > input[i]) {
				int temp = input[j];
				input[j] = input[i];
				input[i]=temp;
				}
			}
	}
	for (int k = 0; k < c; k++)
		cout << input[k] << endl;

}