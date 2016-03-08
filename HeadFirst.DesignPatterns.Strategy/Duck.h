#pragma once

#include "FlyBehavior.h"
#include "QuackBehavior.h"

namespace DesignPattern
{
	/*
	 *分类：类
	 *名称：鸭子基类
	 **/
	class CDuck
	{
	protected:
		IFlyBehavior *flyBehavior;
		IQuackBehavior *quackBehavior;

	public:
		CDuck();
		virtual ~CDuck();

	public :
		virtual void display() = 0;
		void swin();		
		void setFlyBehavior(IFlyBehavior *fly);
		void setQuackBehavior(IQuackBehavior *quack);
		void performFly();
		void performQuack();
	};
}