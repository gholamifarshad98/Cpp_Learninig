// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void f(int[][4]);
double mymean(int [3][4]);
int main(){
	int a[3][4] = { {1,2,3,5},{},{9,4,5,2} };
	f(a);
	cout<<endl<<mymean(a)<<endl;

    return 0;
}

void f(int input[][4]) {
		for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << input[i][j] << "\t"<<"\t";
		}
		cout << endl;
	}

}


double mymean(int input[3][4]) {
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			sum = sum + input[i][j];
		}
	}
return static_cast<double>(sum) / 12;
}