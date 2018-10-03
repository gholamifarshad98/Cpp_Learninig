// ConsoleApplication34.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class c
{
public:
	c(int,int);
	c();
	~c();
	int x;
	int y;
	c operator+(c&);
private:

};

c::c()
{
}
c::c(int a, int b) :x(a), y(b) {
} 
c::~c()
{
}
c c::operator+(c& ob) {
	int a = x + ob.x;
	int b = y + ob.y;
	ob.x = 0;
	ob.y = 10;

	c ob1(a,b);

	return ob1;
}
int main()
{
	c ob1(1, 2);
	c ob2(3, 4);
	c ob3;
	ob3 = ob1 + ob2;
	cout << ob3.x << "    " << ob3.y << endl;
    return 0;
}

