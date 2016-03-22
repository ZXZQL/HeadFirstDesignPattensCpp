
#include "Observer.h"

DesignPatterns_Observer::IObserver::~IObserver()
{
	//可观察对象的指针应该由其自己维护
	/*if (subject != nullptr)
			{
			delete subject;
			}*/
}

DesignPatterns_Observer::IObserver::IObserver(ISubject* subj)
{
	this->subject = subj;
}
