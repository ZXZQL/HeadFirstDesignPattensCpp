#pragma once

namespace DesignPattern
{
	/*
	 *飞行行为接口
	 */
	class FlyBehavior
	{
	public:
		FlyBehavior(){}
		virtual ~FlyBehavior(){}

	public:
		virtual void fly() = 0;
	};
}