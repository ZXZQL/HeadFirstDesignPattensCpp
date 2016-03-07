#pragma once

namespace DesignPattern
{
	class QuackBehavior
	{
	public:
		QuackBehavior(){	}
		virtual ~QuackBehavior(){}
	
	public:
		virtual void quack() = 0;
	};
}
