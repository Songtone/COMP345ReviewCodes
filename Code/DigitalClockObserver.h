#pragma once
#include "Observer.h"
#include "ClockTimer.h"

class DigitalClockObserver : public Observer {
    
public:
    DigitalClockObserver();
    DigitalClockObserver(ClockTimer* s);
    ~DigitalClockObserver();
    void Update();
    void display();
    virtual string constructDisplayString();
    ClockTimer *getSubject();
protected:
    ClockTimer *_subject;
};

