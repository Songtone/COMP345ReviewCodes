// COMP345Tests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "COMP345Tests.h"

using namespace std;
//using std::cout; this also works insteas of using namespre std. need to specify what you want to use from which library
//using std::cin;
//using std::endl;

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
