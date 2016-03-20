#pragma once

namespace DesignPatterns_Strategy
{
	/*
	 *分类：接口
	 *名称：飞行行为接口
	 */
	class IFlyBehavior
	{
	public:
		IFlyBehavior(){}
		virtual ~IFlyBehavior(){}

	public:
		virtual void fly() = 0;
	};
}