// COMP345Tests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "COMP345Tests.h";

using namespace std;

int main()
{

	cout << "Hello World" << endl;
	cin >> x;
	cin >> y;
	cout << x <<"+"<< y << endl;
	math(x,y);
	cout << z << endl;
	system("pause");
    return 0;
}

int math(int first,int second) {
	z = first + second;

	return z;
}
