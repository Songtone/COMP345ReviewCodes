#include "stdafx.h"
#include "DigitalClock.h"
#include "ClockTimer.h"
#include <iostream>

//CONCRETE OBSERVER
using namespace std;

DigitalClock::DigitalClock() {

};
DigitalClock::DigitalClock(ClockTimer* s) {
	//Upon instantiation, attaches itself to a clocktimer
	_subject = s;
	_subject->Attach(this);
};
DigitalClock::~DigitalClock() {
	//Upon destruction, detachess itself fro ma clock timer
	_subject->Detach(this);
};
void DigitalClock::Update() {
	//called by notify() when state subeject changes
	display();
};
void DigitalClock::display() {
	int hour = _subject->getHour();
	int minute = _subject->getMinute();
	int second = _subject->getSecond();
	cout << hour << ":" << minute << ":" << second << endl;
};
