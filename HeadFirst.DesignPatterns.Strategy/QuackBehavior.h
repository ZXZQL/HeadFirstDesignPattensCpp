#pragma once

namespace DesignPattern
{
	/*
	*咕咕叫行为接口
	**/
	class QuackBehavior
	{
	public:
		QuackBehavior(){	}
		virtual ~QuackBehavior(){}

	public:
		virtual void quack() = 0;
	};
}
