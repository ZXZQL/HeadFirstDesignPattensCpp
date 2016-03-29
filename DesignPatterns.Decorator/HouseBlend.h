#pragma once
#include "Beverage.h"

namespace DesignPatterns_Decorator
{
	class CHouseBlend : public CBeverage
	{
	public:
		CHouseBlend();
		virtual ~CHouseBlend();

	public:
		virtual double cost() override;
	};
}