// VirtualReview.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;



class Animal {
public:
	//void eat(){ cout << "I'm eating generic food.\n"; }
	virtual void eat() { cout << "I'm eating generic food.\n"; }
};
class Dog : public Animal{
public:
	void eat() { cout << "I'm eating Kibbles.\n"; }
};
void func(Animal *xyz) {
	xyz->eat();
}
int main()
{
	Animal *animal = new Animal;
	Dog *woof = new Dog;

	animal->eat();//output "I'm eating generic food.\n"
	woof->eat();//output "I'm eating Kibbles.\n"

	func(animal);//output "I'm eating generic food.\n" when not using virtual at top
	func(woof);//output "I'm eating generic food.\n" when not using virtual at top
	system("pause");
    return 0;
}

