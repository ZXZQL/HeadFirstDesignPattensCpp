#pragma once

#include "FlyBehavior.h"
#include "QuackBehavior.h"

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

<<<<<<< HEAD
	public:
		virtual void display() = 0;
		void swin();
=======
	public :
		virtual void display() = 0;
		void swin();		
>>>>>>> 5ba178674029b0d825ebf3392091949b832fc993
		void setFlyBehavior(FlyBehavior *fly);
		void setQuackBehavior(QuackBehavior *quack);
		void performFly();
		void performQuack();
	};
}