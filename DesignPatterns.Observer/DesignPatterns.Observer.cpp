#include "iostream"
#include "WeatherData.h"
#include "Observer.h"
#include "Subject.h"
#include "CurrentConditionsDisplay.h"
#include "StatisticsDisplay.h"

using namespace DesignPatterns_Observer;
using namespace std;

int main()
{
	CWeatherData *weatherData = new CWeatherData();
	CCurrentConditionsDisplay *currentDisplay = new CCurrentConditionsDisplay(weatherData);
	CStatisticsDisplay *statisticsDisplay = new CStatisticsDisplay(weatherData);

	weatherData->setMeasurements(80, 65, 30.4f);

	//这里没有释放被观察者
	delete weatherData;
	return 0;
}

