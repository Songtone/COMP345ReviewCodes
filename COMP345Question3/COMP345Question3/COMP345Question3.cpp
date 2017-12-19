// COMP345Question3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"COMP345Question3.h"
#include <iostream>
#include <string>

using namespace std;

MyArray::MyArray() {//default constructor

	theArray = new int[size];

}
MyArray::MyArray(int array1[], int a) {//parameriterized constructor

	theArray = new int[a];

	for (int i = 0; i < a; i++) {
		if (isInArray(array1[i])) {
			theArray[size] = array1[i];
			size++;
		}
	}
}
MyArray::MyArray(const MyArray& m) {//copy constructor
	theArray = m.theArray;
	size = m.size;
}
MyArray::~MyArray() {//deconstructor
	cout << "Deconstructing the array" << endl;
}
bool MyArray::isInArray(int number) {//function to test if a number is already in the array

	for (int i = 0; i < size; i++) {
		if (number == getArray()[i]) {
			return false;
		}
	}
}
MyArray& MyArray::operator =(const MyArray a) {//assignment operator
	theArray = a.theArray;
	size = a.size;
	return *this;
}



int main() {
	cout << "Creating statically allocated array..." << endl;
	int sampleArray[4] = { 1, 2, 2, 4 };
	cout << "Using constructor..." << endl;
	MyArray anArray(sampleArray, 4);
	cout << "Using copy constructor..." << endl;
	MyArray *copiedArray = new MyArray(anArray);
	cout << "Printing content of MyArray..." << endl;
	for (int i = 0; i < copiedArray->getSize(); i++)\
		cout << copiedArray->getArray()[i] << endl;
	delete copiedArray;
	int i;  cin >> i;
}
