#pragma once
#include "ObserverDecorator.h"
#include "MinutesDecorator.h"
class HoursDecorator : public ObserverDecorator {
public:
    HoursDecorator(DigitalClockObserver * toDec) : ObserverDecorator(toDec) {};
    void Update();
    void display();
    string constructDisplayString();
};
