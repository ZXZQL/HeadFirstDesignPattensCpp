#pragma once
#include "Beverage.h"

/*
*ÒûÁÏ
**/
namespace DesignPatterns_Decorator
{
	class CDecaf : public CBeverage
	{
	public:
		CDecaf();
		virtual ~CDecaf();

	public:
		virtual double cost() override;
	};
}
