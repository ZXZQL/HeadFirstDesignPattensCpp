
#include "Observer.h"
#include "Subject.h"

DesignPatterns_Observer::Subject::Subject()
{
}

DesignPatterns_Observer::Subject::~Subject()
{
}

void DesignPatterns_Observer::Subject::removeObserver(Observer* o)
{
	if (o != nullptr)
	{
		Observers.remove(o);
		//delete o;//???
	}
}

void DesignPatterns_Observer::Subject::notifyObservers()
{
	for (auto var = Observers.begin(); var != Observers.end(); ++var)
	{
		(*var)->update();
	}
}

void DesignPatterns_Observer::Subject::registerObserver(Observer* o)
{
	Observers.push_back(o);
}