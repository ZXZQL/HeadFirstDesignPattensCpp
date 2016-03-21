
#include "Observer.h"

DesignPatterns_Observer::Observer::~Observer()
{
	delete subject;
}

DesignPatterns_Observer::Observer::Observer(Subject* subject)
{
	this->subject = subject;
}
