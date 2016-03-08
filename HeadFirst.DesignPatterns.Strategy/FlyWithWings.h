#pragma once

#include "FlyBehavior.h"

namespace DesignPattern
{
	/*
	 *分类：接口
	 *名称：用翅膀的飞行行为
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