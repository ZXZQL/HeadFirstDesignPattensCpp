#pragma once

#include "FlyBehavior.h"

namespace DesignPatterns_Strategy
{
	/*
	 *分类：接口
	 *名称：用翅膀飞行
	 **/
	class CFlyWithWings : public IFlyBehavior
	{
	public:
		CFlyWithWings();
		virtual ~CFlyWithWings();

	public :
		void fly();
	};

}