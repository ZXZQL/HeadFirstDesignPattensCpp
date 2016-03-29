#pragma once
#include "Beverage.h"

namespace DesignPatterns_Decorator
{
	class CCondimentDecortor :
		public CBeverage
	{
	public:
		CCondimentDecortor();
		virtual ~CCondimentDecortor();

		virtual double cost() override;

	};
}