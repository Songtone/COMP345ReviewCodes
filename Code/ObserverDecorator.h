#pragma once
#include "DigitalClockObserver.h"
class ObserverDecorator: public DigitalClockObserver{
protected:
    DigitalClockObserver * DecoratedClock;
    
public:
    ObserverDecorator(DigitalClockObserver * toDec);
    void Update();
    void display();
    string constructDisplayString ();
    ClockTimer * getSubject();
};

