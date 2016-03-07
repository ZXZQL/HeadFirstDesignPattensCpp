#pragma once

namespace DesignPattern
{
	class Duck
	{
	protected:
		FlyBehavior *flyBehavior;
		QuackBehavior *quackBehavior;

	public:
		Duck();
		virtual ~Duck();

	public :
		virtual void display() = 0;
		void swin();		
		void setFlyBehavior(FlyBehavior *fly);
		void setQuackBehavior(QuackBehavior *quack);
		void performFly();
		void performQuack();
	};
}