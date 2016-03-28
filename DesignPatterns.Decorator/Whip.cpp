#include "Whip.h"

DesignPatterns_Decorator::CWhip::CWhip(CBeverage * b)
{
	beverage = b;
}

DesignPatterns_Decorator::CWhip::~CWhip()
{
	if (beverage != nullptr)
	{
		delete beverage;
	}
}

double DesignPatterns_Decorator::CWhip::cost()
{
	return beverage->cost() + 0.10f;
}
