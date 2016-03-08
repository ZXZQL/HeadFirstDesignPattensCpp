#pragma once
#include "FlyBehavior.h"

namespace DesignPattern
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