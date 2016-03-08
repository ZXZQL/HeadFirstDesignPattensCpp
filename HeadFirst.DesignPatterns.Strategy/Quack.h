#pragma once

#include "QuackBehavior.h"

namespace DesignPattern
{
	/*
	 *分类：类
	 *名称：咕咕叫行为
	 **/
	class Quack :public IQuackBehavior
	{
	public:
		Quack();
		virtual ~Quack();
		
	public :
		void quack();
	};
}