#include "stdafx.h"
#include "ClockTimer.h"
#include "DigitalClock.h"
#include <iostream>
using namespace std;

int main(void) {
	//create clocktimer to be observed
	ClockTimer *timer = new ClockTimer;

	//creaate a digital clock that is connected to the clocktimer
	DigitalClock *digitalClock = new DigitalClock(timer);

	//Advancing the ClockTimer updates the digital clock
	//as tick() calls Update() after it changed its state

	int secs;
	cout << "Enter number of seconds to count: ";
	cin >> secs;
	timer->start(secs);
	
	system("pause");
	return 0;
}