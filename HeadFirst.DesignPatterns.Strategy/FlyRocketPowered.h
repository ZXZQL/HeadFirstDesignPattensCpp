#pragma once
#include "FlyBehavior.h"

namespace DesignPattern
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