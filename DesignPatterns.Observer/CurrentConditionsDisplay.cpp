#include "iostream"
#include "string"
#include "CurrentConditionsDisplay.h"
#include "WeatherData.h"

using std::cout;
using std::endl;
using std::string;

CCurrentConditionsDisplay::CCurrentConditionsDisplay(ISubject* subject)
	:IObserver(subject)
{
	humidity = 0.0f;
	temperature = 0.0f;
	subject->registerObserver(this);
}

CCurrentConditionsDisplay::~CCurrentConditionsDisplay()
{
	std::cout << "\t\t==释放目前状况布告板对象." << std::endl;
}

void CCurrentConditionsDisplay::display()
{
	cout << "Current conditions:" << temperature << "F degrees and " << humidity << "% humidity." << endl;
}

void CCurrentConditionsDisplay::update(ISubject *sub)
{
	humidity = ((CWeatherData*)sub)->getHumidity();
	temperature = ((CWeatherData*)sub)->getTemperature();
	display();
}
