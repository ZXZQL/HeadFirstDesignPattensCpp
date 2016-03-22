
#include "Observer.h"
#include "Subject.h"

DesignPatterns_Observer::ISubject::ISubject()
{
}

DesignPatterns_Observer::ISubject::~ISubject()
{
	//析构的时候，释放所有观察者的内存
	for (auto var = Observers.begin(); var != Observers.end(); ++var)
	{
		if ((*var) != nullptr)
		{
			delete (*var);
		}
	}
}

void DesignPatterns_Observer::ISubject::removeObserver(IObserver* o)
{
	if (o != nullptr)
	{
		//观察者的指针由可观察对象类维护，移除观察者时就回收内存。
		Observers.remove(o);
		if (o != nullptr)
		{
			delete o;
		}
	}
}

void DesignPatterns_Observer::ISubject::notifyObservers()
{
	for (auto var = Observers.begin(); var != Observers.end(); ++var)
	{
		(*var)->update(this);
	}
}

void DesignPatterns_Observer::ISubject::registerObserver(IObserver* o)
{
	Observers.push_back(o);
}