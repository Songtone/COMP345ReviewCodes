// COMP345Question3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class MyArray {
public:
	MyArray();//default constructor
	MyArray(int arrayNew[],int arrayOld[]);//constructor that takes arrays as arguments
	MyArray(const MyArray& m);//copy constructor
	bool isInArray(int number);
	void operator = (const MyArray &m);

private:
	int* theArray;
	int size;
	string s;

};


int main()
{
	MyArray();
	system("pause");
    return 0;
}

MyArray::MyArray() {
	size = 0;
	theArray = new int[size];
	s = "hey";
	cout << s;
}
MyArray::MyArray(int array1[], int arrayOld[]) {


}
MyArray::MyArray(const MyArray& m) {
	theArray = m.theArray;
	size = m.size;
}
bool MyArray::isInArray(int number) {

}
void MyArray::operator = (const MyArray &m) {
	theArray = m.theArray;
	size = m.size;
}

