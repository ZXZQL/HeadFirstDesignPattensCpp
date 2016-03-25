#pragma once

#include <list>   

namespace DesignPatterns_Observer
{
	//类型前置声明
	class IObserver;

	/*
	 *可观察对象
	 */
	class ISubject
	{
	private:
		//存储观察者对象指针
		std::list<IObserver*> Observers;

	public:
		ISubject();
		virtual ~ISubject();

	public:
		void registerObserver(IObserver* o);
		void removeObserver(IObserver* o);
		void notifyObservers();
	};
}