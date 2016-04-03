#pragma once
#include "CondimentDecorator.h"

/*
*����
**/
namespace DesignPatterns_Decorator
{
	class CMilk :public CCondimentDecorator
	{
	protected:
		CBeverage *beverage;

	public:
		CMilk(CBeverage *b);
		virtual ~CMilk();

	public:
		virtual double cost() override;
		virtual string getDescription() override;
	};
}