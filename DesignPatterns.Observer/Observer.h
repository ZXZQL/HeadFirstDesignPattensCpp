#pragma once

#include "Subject.h"

namespace DesignPatterns_Observer
{
	/*
	 *π€≤Ï’ﬂ
	 */
	class Observer
	{
	private:
		Subject *subject;

	public:
		Observer(Subject* subject);

		virtual ~Observer();

	public:
		virtual void update() = 0;
	};
}