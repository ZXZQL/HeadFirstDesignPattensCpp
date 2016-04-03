#pragma once

#include "Beverage.h"

/*
*ÒûÁÏ
**/
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