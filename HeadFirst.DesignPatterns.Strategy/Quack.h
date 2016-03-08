#pragma once

#include "QuackBehavior.h"

namespace DesignPattern
{
	/*
	 *¹¾¹¾½ÐÐÐÎª
	 **/
	class Quack :public QuackBehavior
	{
	public:
		Quack();
		virtual ~Quack();

	public:
		
	public :
		void quack();
	};
}