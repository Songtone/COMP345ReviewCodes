#include "HoursDecorator.h"
#include <iostream>
#include <string>
using namespace std;

void HoursDecorator::Update() {
    display();
};

void HoursDecorator::display() {
    cout << constructDisplayString() << endl;
};

string HoursDecorator::constructDisplayString(){
    string toDisplay = to_string(getSubject() -> getHour()) + " Hours ";
    return ObserverDecorator::constructDisplayString() + toDisplay;
};
