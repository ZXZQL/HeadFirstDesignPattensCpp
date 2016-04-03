#pragma once
#include "Beverage.h"

/*
 *装饰者基类
 **/
namespace DesignPatterns_Decorator
{
	class CCondimentDecorator :	public CBeverage
	{
	public:
		CCondimentDecorator();
		virtual ~CCondimentDecorator();

	public:
		virtual double cost() override;
	};
}