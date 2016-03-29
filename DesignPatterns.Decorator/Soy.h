#pragma once
#include "CondimentDecorator.h"

namespace DesignPatterns_Decorator
{
	class CSoy : public  CCondimentDecorator
	{
	protected:
		CBeverage *beverage;

	public:
		CSoy(CBeverage *b);
		virtual ~CSoy();

	public:
		virtual double cost() override;
		virtual string getDescription() override;
	};
}