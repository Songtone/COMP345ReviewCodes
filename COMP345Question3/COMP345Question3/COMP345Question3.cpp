// COMP345Question3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class MyArray {
public:
	MyArray();//default constructor
	MyArray(int arrayNew[], int arrayOld[]);//constructor that takes arrays as arguments
	MyArray(const MyArray& m);//copy constructor

	~MyArray();//destructor

	bool isInArray(int number);
	void operator = (const MyArray &m);
	void getArray();
	void getSize();

private:
	int* theArray;
	int size;

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

}
MyArray::MyArray(int array1[], int arrayOld[]) {

	for (int i = 0; i < sizeof(array1) / sizeof(array1[0]); i++) {
		if (isInArray(array1[i])) {

		}
		else
		{
			arrayOld[size + 1] = array1[i];
		}
	}

}
MyArray::MyArray(const MyArray& m) {
	theArray = m.theArray;
	size = m.size;
}
MyArray::~MyArray() {
	delete theArray;
}
bool MyArray::isInArray(int number) {
	for (int i = 0; i < size; i++) {
		if (number == theArray[i]) {
			return true;
			break;
		}
		else {
			return false;
		}

	}

}
void MyArray::operator = (const MyArray &m) {
	theArray = m.theArray;
	size = m.size;
}
void getArray() {


}
void getSize() {

}

