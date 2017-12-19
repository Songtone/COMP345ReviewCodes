#pragma once

class MyArray {
public:
	MyArray();//default constructor

	MyArray(int arrayNew[], int a);//constructor that takes arrays as arguments

	MyArray(const MyArray& m);//copy constructor

	~MyArray();//destructor

	MyArray &operator =(const MyArray a); // assignment operator

	bool isInArray(int number);//find out if a number is already in the array
	
	inline int* getArray() {//inline function that returns the array
		return theArray;
	}
	inline int getSize() {//inline function that returns the size of the array
		return size;
	}

private:
	int* theArray;
	int size = 0;

};