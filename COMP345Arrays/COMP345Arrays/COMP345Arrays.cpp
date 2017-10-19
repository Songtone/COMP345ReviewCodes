// COMP345Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

double getAverage(int arr[], int size);//passing an array as an argument

int score[7];
int main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	score[1] = 20;
	score[0] = 25;
	score[2] = 50;
	score[3] = 30;
	score[4] = 40;
	score[5] = 21;
	double result;
	for (int i = 0; i < 20; i++) {
		cout << score[i] << endl;
	}
	result = getAverage(score, 7);

	cout << result << endl;

	int *p;//pointers
	p = score;
	cout << *p << endl;
	cout << *(p + 1) << endl;//points to score[1]
	cout << *(score + 1) << endl;//same as above

	system("pause");
    return 0;
}
double getAverage(int arr[], int size) {
	int i, sum = 0;
	double avg;
	for (i = 0; i < size; i++) {
		sum += arr[i];
	}
	avg = double(sum) / size;
	return avg;
}

