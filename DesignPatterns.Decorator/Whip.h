#pragma once

#include "CondimentDecorator.h"

namespace DesignPatterns_Decorator
{
	class CWhip : public CCondimentDecorator
	{
	protected:
		CBeverage *beverage;

	public:
		CWhip(CBeverage * b);
		virtual ~CWhip();

	public:
		virtual double cost() override;
		virtual string getDescription() override;
	};
}