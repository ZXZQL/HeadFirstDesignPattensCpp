#pragma once

#include "Beverage.h"

namespace DesignPatterns_Decorator
{
	class CEspresso : public CBeverage
	{
	public:
		CEspresso();
		virtual ~CEspresso();

	public:
		virtual double cost() override;
	};
}