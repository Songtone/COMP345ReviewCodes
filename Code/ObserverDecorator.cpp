#include "ObserverDecorator.h"
#include <iostream>
#include <string>
using namespace std;

ObserverDecorator::ObserverDecorator(DigitalClockObserver *toDec) {
    DecoratedClock = toDec;
    _subject = DecoratedClock->getSubject();
    _subject->Attach(this);
    _subject->Detach(DecoratedClock);
}

string ObserverDecorator::constructDisplayString() {
    return DecoratedClock -> constructDisplayString();
}

void ObserverDecorator::display() {
    cout << constructDisplayString() << endl;
}

void ObserverDecorator::Update() {
    display();
}

ClockTimer * ObserverDecorator::getSubject(){return _subject;};

