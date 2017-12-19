p : ClockDriver.o ClockTimer.o MinutesDecorator.o HoursDecorator.o ObserverDecorator.o DigitalClockObserver.o Observer.o Subject.o
	g++ -std=c++11 -o p ClockDriver.o ClockTimer.o MinutesDecorator.o HoursDecorator.o ObserverDecorator.o DigitalClockObserver.o Observer.o Subject.o

ClockDriver.o : ClockDriver.cpp
	g++ -std=c++11 -c ClockDriver.cpp

ClockTimer.o : ClockTimer.h ClockTimer.cpp
	g++ -std=c++11 -c ClockTimer.cpp

Decorator.o : Decorator.cpp Decorator.h
	g++ -std=c++11 -c Decorator.cpp

DigitalClockObserver.o : DigitalClockObserver.cpp DigitalClockObserver.h
	g++ -std=c++11 -c DigitalClockObserver.cpp

MinutesDecorator.o : MinutesDecorator.cpp MinutesDecorator.h
	g++ -std=c++11 -c MinutesDecorator.cpp

HoursDecorator.o : HoursDecorator.h HoursDecorator.cpp
	g++ -std=c++11 -c HoursDecorator.cpp

ObserverDecorator.o : ObserverDecorator.cpp ObserverDecorator.h
	g++ -std=c++11 -c ObserverDecorator.cpp

Subject.o : Subject.cpp Subject.h
	g++ -std=c++11 -c Subject.cpp

clean :
	rm *.o p
