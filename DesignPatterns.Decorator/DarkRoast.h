#pragma once
#include "Beverage.h"

/*
 *ÒûÁÏ
 **/
namespace DesignPatterns_Decorator
{
	class CDarkRoast :public CBeverage
	{
	public:
		CDarkRoast();
		virtual ~CDarkRoast();

	public:
		virtual double cost() override;
	};
}