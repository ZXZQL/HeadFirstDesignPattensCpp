#pragma once
#include "FlyBehavior.h"

namespace DesignPatterns_Strategy
{
	/*
	 *分类：类
	 *名称：火箭飞行
	 **/
	class CFlyRocketPowered : public IFlyBehavior
	{
	public:
		CFlyRocketPowered();
		virtual ~CFlyRocketPowered();
		
	public :
		void fly();
	};
}