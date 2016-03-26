#pragma once

namespace DesignPatterns_Observer
{
	//ǰ������
	class ISubject;

	/*
	 *�۲���
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