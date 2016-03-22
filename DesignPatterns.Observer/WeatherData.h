#pragma once

#include "Subject.h"

using namespace DesignPatterns_Observer;

class CWeatherData : public ISubject
{
private:
	float temperature;
	float humidity;
	float pressure;

public:
	CWeatherData();
	virtual ~CWeatherData();

public:
	void measurementsChanged();
	void setMeasurements(float tmeperature, float humidity, float pressure);

	//ªÒ»° Ù–‘
	float getTemperature();
	float getHumidity();
	float getPressure();
};
