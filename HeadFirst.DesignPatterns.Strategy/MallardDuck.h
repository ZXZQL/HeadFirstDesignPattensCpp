#pragma once

#include "Duck.h"

namespace DesignPattern
{
	/*
	 *Ñ±»¯Ò°Ñ¼
	 **/
	class MallardDuck : public Duck
	{
	public:
		MallardDuck();
		virtual ~MallardDuck();

	public:
		void display();
	};
}
