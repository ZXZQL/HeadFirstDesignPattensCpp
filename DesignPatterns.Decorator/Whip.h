#pragma once

#include "Beverage.h"

namespace DesignPatterns_Decorator
{
	class CWhip : public CBeverage
	{
	protected:
		CBeverage *beverage;

	public:
		CWhip(CBeverage * b);
		virtual ~CWhip();

	public:
		virtual double cost() override;
	};
}