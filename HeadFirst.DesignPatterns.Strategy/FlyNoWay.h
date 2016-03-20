#pragma once
#include "FlyBehavior.h"

namespace DesignPatterns_Strategy
{
	/*
	 *分类：类
	 *名称：不能飞行
	 **/
	class CFlyNoWay :public IFlyBehavior
	{
	public:
		CFlyNoWay();
		virtual ~CFlyNoWay();

	public :
		void fly();
	};
}