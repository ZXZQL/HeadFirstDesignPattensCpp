#pragma once

#include <list>   

namespace DesignPatterns_Observer
{
	//����ǰ������
	class IObserver;

	/*
	 *�ɹ۲����
	 */
	class ISubject
	{
	private:
		//�洢�۲��߶���ָ��
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