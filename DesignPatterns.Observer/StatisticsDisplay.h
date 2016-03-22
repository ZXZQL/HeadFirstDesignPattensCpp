#pragma once
#include "Observer.h"
#include "DisplayElement.h"
#include "iostream"

using namespace DesignPatterns_Observer;
using namespace std;

class CStatisticsDisplay : public IObserver, IDisplayElement
{
private:
	float temperature = 0.0f;
	float humidity = 0.0f;
	float pressure = 0.0f;
	float maxTemp = 0.0f;
	float minTemp = 200;
	float tempSum = 0.0f;
	int numReadings = 0;

public:
	CStatisticsDisplay(ISubject* subj);
	virtual ~CStatisticsDisplay();

public:
	virtual void update(ISubject *subj) override;
	virtual void display() override;
};

