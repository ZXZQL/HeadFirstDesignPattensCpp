#pragma once
#include "Beverage.h"

namespace DesignPatterns_Decorator
{
	class CMilk :public CBeverage
	{
	protected:
		CBeverage *beverage;

	public:
		CMilk(CBeverage *b);
		virtual ~CMilk();

	public:
		virtual double cost() override;
	};
}