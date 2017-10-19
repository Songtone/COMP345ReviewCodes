// COMP345InputOutput.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string line;
	int numberOfGames;
	int numberOfTacos = 10;
	double price = 78.5;
	double price2 = 78.5001;
	

	cout << "How many games have you played?" << endl;
	cin >> numberOfGames;
	cout << "You have played " << numberOfGames << " games." << endl;

	cout << "The price is $" << price << "\n";
	cout << "The price is $" << price2 << "\n";
	
	cout.setf(ios::fixed);//will force the output of all future cout to be 2 numbers after the period.
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "The price is $" << price2 << "\n";

	ofstream outputfilestream;//creates a stream
	outputfilestream.open("test.txt");//opens or creates/open the specified text file
	outputfilestream << "This is a test" << endl; //write this in it
	outputfilestream.close();//close the stream.
	cout << "I wrote in test" << endl;

	ofstream output;//same as above
	output.open("SebStuff.txt");
	output << "DONT OPEN" << endl;
	output.close();
	cout << "I wrote in sebstuff" << endl;

	ifstream input("SebStuff.txt");//to read the file
	if (input.is_open()) {
		while (getline(input, line)) {//must have a string instantiated
			cout << line << endl;
		}

		input.close();//close the stream
	}
	else {
		cout << "cant open file" << endl;
	}


	system("pause");
    return 0;
}

