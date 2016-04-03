#pragma once
#include "Beverage.h"

/*
 *װ���߻���
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