#pragma once

namespace DesignPattern
{
	class FlyBehavior
	{
	public:
		FlyBehavior()
		{
		}

		virtual ~FlyBehavior()
		{
		}

		virtual void fly() = 0;
	};
}