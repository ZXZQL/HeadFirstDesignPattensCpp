
#include "Observer.h"

DesignPatterns_Observer::IObserver::~IObserver()
{
	//�ɹ۲�����ָ��Ӧ�������Լ�ά��
	/*
	if (subject != nullptr)
	{
		delete subject;
	}
	*/
}

DesignPatterns_Observer::IObserver::IObserver(ISubject* subj)
{
	this->subject = subj;
}
