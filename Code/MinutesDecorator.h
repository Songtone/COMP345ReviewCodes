#pragma once
#include "ObserverDecorator.h"
#include "HoursDecorator.h"
class MinutesDecorator : public ObserverDecorator {
public:
    MinutesDecorator(DigitalClockObserver * toDec) : ObserverDecorator(toDec) {};
    void Update();
    void display();
    string constructDisplayString ();
};

