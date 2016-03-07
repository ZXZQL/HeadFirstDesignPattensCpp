#pragma once

namespace DesignPattern
{
	class QuackBehavior
	{
	public:

		QuackBehavior()
		{
		}

		virtual ~QuackBehavior()
		{
		}

		virtual void quack() = 0;
	};
}
