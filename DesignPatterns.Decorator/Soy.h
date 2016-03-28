#pragma once
#include "Beverage.h"

namespace DesignPatterns_Decorator
{
	class CSoy : public CBeverage
	{
	protected:
		CBeverage *beverage;

	public:
		CSoy(CBeverage *b);
		virtual ~CSoy();

	public:
		virtual double cost() override;
	};
}