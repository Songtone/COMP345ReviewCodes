// COMP345StructClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include "COMP345StructClass.h"
#include "donut.h"
using namespace std;


int main()
{
	struct CDAccountV1P account;//declare account type CDAccountV1P.
	account.balance = 20.00;
	account.interestRate = 10.00;
	account.term = 12;
	cout << account.balance << endl;
	printAccount(account);//output is Balance: 20, Interest Rate: 10.00, Term: 12.


	struct Books books;
	books.price = 25;
	books.year = 1990;
	printBookData(&books);//need to find the address

	class cake cakes;
	cakes.numberOfCakes = 10;
	cakes.numberOfCandles = 20;
	cakes.priceCalculator(cakes.numberOfCakes, cakes.numberOfCandles);//use the object to call the function

	class donut don;//inheritance
	don.priceCalculator(cakes.numberOfCakes, cakes.numberOfCandles);//uses this function from his parent
	don.donutPrice = 25;
	don.getRealPrice(cakes.price);//uses a variable from the parent
	don.numberOfCakes = 25;
	int s = don.numberOfCakes;

	cout << s << endl;
	

	system("pause");
    return 0;
}

void printAccount(struct CDAccountV1P acc) {//initialize function with data.
	cout << "Balance: " << acc.balance << endl;
	cout << "Interest Rate: " << acc.interestRate << endl;
	cout << "Term: " << acc.term << endl;
}
void printBookData(struct Books *books) {//access them with ->
	cout << "Price: " << books->price << endl;
	cout << "Year: " << books->year << endl;

}void cake::priceCalculator(int cakes, int candles) {
	price = cakes + candles;
cout << "The Price is " << price << endl;
}

void donut::getRealPrice(int cakePrice) {
	realPrice = donutPrice + cakePrice;
	cout << "The real fat price is " << realPrice << endl;

}

