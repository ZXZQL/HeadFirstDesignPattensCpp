#include "StatisticsDisplay.h"
#include "WeatherData.h"

CStatisticsDisplay::CStatisticsDisplay(ISubject* subj)
	:IObserver(subj)
{
	subj->registerObserver(this);
}

CStatisticsDisplay::~CStatisticsDisplay()
{
	std::cout << "\t\t==释放统计数据布告板对象." << std::endl;
}

void CStatisticsDisplay::update(ISubject *subj)
{
	this->humidity = ((CWeatherData*)(this->subject))->getTemperature();
	this->pressure = ((CWeatherData*)(this->subject))->getPressure();
	this->temperature = ((CWeatherData*)(this->subject))->getTemperature();

	tempSum += temperature;
	numReadings++;

	if (temperature > maxTemp)
	{
		maxTemp = temperature;
	}
	if (temperature < minTemp)
	{
		minTemp = temperature;
	}
	display();
}

void CStatisticsDisplay::display()
{
	std::cout << "Avg/Max/Min temperature = "
		<< (tempSum / numReadings) << "/" << maxTemp << "/" << minTemp << endl;
}
