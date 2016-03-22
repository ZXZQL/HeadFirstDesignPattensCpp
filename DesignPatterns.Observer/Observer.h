#pragma once

#include "Subject.h"

namespace DesignPatterns_Observer
{
	/*
	 *π€≤Ï’ﬂ
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