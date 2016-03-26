#include "WeatherData.h"
#include "iostream"

CWeatherData::CWeatherData()
	:ISubject()
{
	this->temperature = 0.0f;
	this->humidity = 0.0f;
	this->pressure = 0.0f;
}

CWeatherData::~CWeatherData()
{
	std::cout << "\t\t==释放天气对象." << std::endl;
}

void CWeatherData::measurementsChanged()
{
	notifyObservers();
}

void CWeatherData::setMeasurements(float temperature, float humidity, float pressure)
{
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	measurementsChanged();
}

float CWeatherData::getTemperature()
{
	return temperature;
}

float CWeatherData::getHumidity()
{
	return humidity;
}

float CWeatherData::getPressure()
{
	return pressure;
}
