#pragma once

namespace DesignPattern
{
	class FlyBehavior
	{
	public:
		FlyBehavior(){}
		virtual ~FlyBehavior(){}

	public:
		virtual void fly() = 0;
	};
}