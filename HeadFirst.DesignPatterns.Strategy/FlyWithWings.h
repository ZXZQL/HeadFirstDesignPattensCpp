#pragma once

#include "FlyBehavior.h"

namespace DesignPattern
{
	/*
	 *用翅膀的飞行行为
	 **/
	class FlyWithWings : public FlyBehavior
	{
	public:
		FlyWithWings();
		virtual ~FlyWithWings();

	public:
	public :
		void fly();
	};

}