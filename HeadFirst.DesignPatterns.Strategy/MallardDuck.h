#pragma once

#include "Duck.h"

namespace DesignPatterns_Strategy
{
	/*
	 *分类：类
	 *名称：驯化野鸭类
	 **/
	class CMallardDuck : public CDuck
	{
	public:
		CMallardDuck();
		virtual ~CMallardDuck();

	public:
		void display();
	};
}
