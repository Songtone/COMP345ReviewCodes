// COMP345Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double p = 3.09999;
	int x = 3;
	int y = { 2 };
	int z;
	int q(2);
	int c;
	z = x + y;
	cout << z << endl;
	z = q;
	cout << z << endl;
	z = p;
	cout << z << endl;
	c = static_cast<int>(p);//casting a double into an int. will return C = 3
	cout << "C = " << c << endl;

	//POINTERS
	cout << "address of x" << endl;
	cout << &x << endl; // will point to the address of x

	int *point = &x;
	cout << *point << endl;//this will give the value 3

	int *point2 = &y;//make poin2 point to the address of y
	cout << *point2 << endl;//returns 2
	point2 = point;//make point2 point where point is pointing. POinter Assignment
	*point2 = *point;//value assignment
	cout << *point2 << endl;//returns 3


	//dynamic variables
	int *p1;//two points pointing to nothing on the stack
	int *p2;

	p1 = new int; //created an int memory on the heap where *p1 is pointing at
	cout << *p1 << endl;//currently pointing at nothing
	*p1 = 42;//will point at the address value
	cout << *p1 << endl;//returns 42
	p2 = p1; //makes p2 point where p1 is pointing
	cout << *p2 << endl;//returns 42
	*p2 = 53;//both p1 and p2 will be pointing at the same memory
	cout << *p1 << " and " << *p2 << endl;//both returns 53
	p1 = new int(88);//creates a new int memory allocation where ONLY *p1 is pointing and initialized as 88 can do p1 = new int then *p1 = 88;
	cout << *p1 << " and " << *p2 << endl; // returns 88 and 53

	delete p1;//DONT FORGET TO DEALLOCATE ANY NEW OBJECTS
	p1 = NULL;//prevent dangling points
	delete p2;
	p2 = NULL;
	

	

	system("pause");
    return 0;
}

