// ConsoleApplication4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#define PI 3.141516

//inline double v(double r,double h=4)
//{
//	return PI*r*r*h;
//}
//
//
//using namespace std;
//int main()
//{
//	cout << v(10)<<endl;
//    return 0;
//}
//

//
//#define f(x,y) (x<y)?x:y
//using namespace std;
//int main() {
//	double x, y;
//	x = 10;
//	y = 12;
//	cout << f(x, y);
//}



//using namespace std;
//void f(int &);
//int main() {
//
//	int i = 5;
//	f(i);
//	cout  <<i<< endl;
//}
//
//void f(int &x) {
//	 x=x+1;
//}

//using	namespace std;
//int f(int );
//double f(double);
//int main() {
//
//	int x = 5;
//	double y = 5.5;
//	cout << f(x) << endl;	
//	cout << f(y) << endl;
//
//}
//
//int f(int x) {
//	return x*x;
//}
//
//double f(double x) {
//	return x*x;
//}
//
//
//template <class T>
//T MaxFarshad(T x,T y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//template <class T>
//T MyMax(T x, T y) {
//	if (x < y)
//		return  (T)y;
//	else
//		return (T)x;
//}
//

//template <class T>
//void f(T &x) {
//	x = x*(-1);
//}
//
//template <class T>
//void f(T &x, T &y) {
//	T temp;
//	temp = x;
//	x = y;
//	y = temp;
//}
//
//using namespace std;
//int main() {
//
//	int x, y;
//	double v, b;
//	char ch1, ch2;
//	x = 1;
//	y = 2;
//	v = 2.2;
//	b = 3.6;
//	ch1 = 'f';
//	ch2 = 'g';
//
//	f(x);
//	cout << x << endl;
//	f(x, y);
//	cout << "x: " << x << '\t' << "y: " << y << endl;
//}
//


using namespace std;
int f(int);
int MyPow(int, int);
int main() {
	int n = 5;
	cout << f(5)<<endl;
	cout << MyPow(2, 10)<<endl;

}



int f(int n) {
	if (n == 0 || n == 1)
		return 1;
	else
		return f(n - 1)*n;

}

int MyPow(int x, int n) {
	int temp;
	if (n == 0)
		return 1;
	if (n == 1)
		return x;
	temp =MyPow(x, n - 1)*x;
	cout << n << endl;
	return temp;
}