#pragma once

#include "FlyBehavior.h"

namespace DesignPattern
{
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