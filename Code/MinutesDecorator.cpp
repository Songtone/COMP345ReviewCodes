#include "MinutesDecorator.h"
#include <iostream>
#include <string>
using namespace std;

void MinutesDecorator::Update() {
    display();
};

void MinutesDecorator::display() {
    cout << constructDisplayString() << endl;
};

string MinutesDecorator::constructDisplayString(){
    string toDisplay = to_string(getSubject() -> getMinute()) + " Minutes ";
    return ObserverDecorator::constructDisplayString() + toDisplay;
};
