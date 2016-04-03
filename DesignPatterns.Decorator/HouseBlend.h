#pragma once
#include "Beverage.h"

/*
*ÒûÁÏ
**/
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