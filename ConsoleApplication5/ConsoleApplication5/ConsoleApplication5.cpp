// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
//
//int main()
//{
//	int a[5]={ 1, 2, 3 };
//	for (int i = 0; i < 5; i++) {
//		cout << a[i] << endl;
//
//	}
//    return 0;
//}
//





//template <class T>
//void f(T a[], int cont) {
//
//
//	for (int i = 0; i < cont; i++) {
//		cout << a[i] << endl;
//	}
//}
//int main() {
//
//	
//
//	int a[4] = { 1,2,3,4 };
//	double b[3] = { 1.1 ,2.3 ,4.6 };
//	f(a, 4);
//	cout << endl << endl << endl;
//	f(b, 3);
//
//	return 0;
//
//}


void Myread(int[], int &);
void Myprint(int[],int);
int main() {
	 
	int c=0;
	int a[5];
	Myread(a, c);
	cout << endl << endl << endl << c << endl << endl;
	Myprint(a, c);




	return 0;
}

void Myread(int input[] , int  &c) {
	
	c = 0;
	do
	{
		cin >> input[c];
		c++;
	} while (c<5);

}

void Myprint(int input[], int c) {

	for (int i = 0; i < c; i++) {
		cout << input[i] << endl;
		}


}
