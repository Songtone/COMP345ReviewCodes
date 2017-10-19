#ifndef COMP345STRUCTCLASS_H;
#define COMP345STRUCTCLASS_H


class cake {
public:
	void priceCalculator(int cakes, int candles);
	int numberOfCakes;
	int numberOfCandles;
	int price;
};

class donut : public cake {//inherits from cake
public:
	int donutPrice;
	int realPrice;
	int cakePrice;
	void getRealPrice(int cakePrice);
};

struct CDAccountV1P
{
	double balance;
	double interestRate;
	int term;
};
struct Books {
	int price;
	int year;
	char title;
}; 

void printAccount(struct CDAccountV1P acc);//create a function witha struct as an argument
void printBookData(struct Books *book);//create a function with a pointer

#endif
