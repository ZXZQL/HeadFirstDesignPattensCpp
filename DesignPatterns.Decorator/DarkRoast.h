#pragma once
#include "Beverage.h"

namespace DesignPatterns_Decorator
{
	class CDarkRoast :public CBeverage
	{
	public:
		CDarkRoast();
		virtual ~CDarkRoast();

	public:
		virtual double cost() override;
	};
}