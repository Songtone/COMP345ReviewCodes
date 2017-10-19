#ifndef DONUT_H
#define DONUT_H

class donut : public cake {//inherits from cake
public:
	int donutPrice;
	int realPrice;
	int cakePrice;
	void getRealPrice(int cakePrice);
};

#endif // !DONUT_H
