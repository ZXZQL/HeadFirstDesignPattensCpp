#pragma once
#include "CondimentDecorator.h"

/*
*����
**/
namespace DesignPatterns_Decorator
{
	class CMocha : public CCondimentDecorator
	{
	protected:
		CBeverage *beverage;

	public:
		CMocha(CBeverage * b);
		virtual ~CMocha();

	public:
		virtual double cost() override;
		string getDescription() override;
	};
}