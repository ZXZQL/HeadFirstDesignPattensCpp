#include "Milk.h"

DesignPatterns_Decorator::CMilk::CMilk(CBeverage *b)
{
	beverage = b;
}

DesignPatterns_Decorator::CMilk::~CMilk()
{
	if (beverage != nullptr)
	{
		delete beverage;
	}
}

double DesignPatterns_Decorator::CMilk::cost()
{
	return beverage->cost() + 0.10f;
}

std::string DesignPatterns_Decorator::CMilk::getDescription()
{
	return beverage->getDescription() + ",Milk";
}
