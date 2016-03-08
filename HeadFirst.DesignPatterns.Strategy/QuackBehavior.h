#pragma once

namespace DesignPattern
{
	/*
	 *分类：接口
	 *名称：咕咕叫行为接口
	 **/
	class IQuackBehavior
	{
	public:
		IQuackBehavior(){}
		virtual ~IQuackBehavior(){}

	public:
		virtual void quack() = 0;
	};
}
