#pragma once
#ifndef OBSERVER_H
#define OBSERVER_H
#include "stdafx.h"

class Observer {

public:
	~Observer();
	virtual void Update() = 0;
protected:
	Observer();
};

#endif // !OBESERVER_H

