#pragma once

#include "QuackBehavior.h"

namespace DesignPattern
{
	class Quack :public QuackBehavior
	{
	public:
		Quack();
		virtual ~Quack();

	public:
		void quack();
	};
}