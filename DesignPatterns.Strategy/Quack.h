#pragma once

#include "QuackBehavior.h"

namespace DesignPatterns_Strategy
{
	/*
	 *分类：类
	 *名称：咕咕叫行为
	 **/
	class CQuack :public IQuackBehavior
	{
	public:
		CQuack();
		virtual ~CQuack();
		
	public :
		void quack();
	};
}