#pragma once

#include <list>   
using std::list;

namespace DesignPatterns_Observer
{
	class IObserver;
	/*
	 *可观察对象
	 */
	class ISubject
	{
	private:
		//存储观察者对象指针
		list<IObserver*> Observers;

	public:
		ISubject();
		virtual ~ISubject();

	public:
		void registerObserver(IObserver* o);
		void removeObserver(IObserver* o);
		void notifyObservers();
	};
}