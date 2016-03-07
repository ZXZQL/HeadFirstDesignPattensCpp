#pragma once

#include "Duck.h"

namespace DesignPattern
{
	class MallardDuck : public Duck
	{
	public:
		MallardDuck();
		virtual ~MallardDuck();

	public:
		void display();
	};
}
