#pragma once
#include "Observer.h"
#include "DisplayElement.h"

using namespace DesignPatterns_Observer;

class CCurrentConditionsDisplay : public IObserver, IDisplayElement
{
private:
	float temperature;
	float humidity;

public:
	CCurrentConditionsDisplay(ISubject* subject);
	virtual ~CCurrentConditionsDisplay();

public:
	void display() override;
	void update(ISubject *sub) override;
};

