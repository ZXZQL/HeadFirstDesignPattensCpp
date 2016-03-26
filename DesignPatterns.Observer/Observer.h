#pragma once

namespace DesignPatterns_Observer
{
	//前置声明
	class ISubject;

	/*
	 *观察者
	 */
	class IObserver
	{
	protected:
		ISubject *subject;

	public:
		IObserver(ISubject* subject);
		virtual ~IObserver();

	public:
		virtual void update(ISubject *subj) = 0;
	};
}