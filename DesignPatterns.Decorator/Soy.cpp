#include "Soy.h"

DesignPatterns_Decorator::CSoy::CSoy(CBeverage *b)
{
	beverage = b;
}

DesignPatterns_Decorator::CSoy::~CSoy()
{
	if (beverage != nullptr)
	{
		delete beverage;
	}
}

double DesignPatterns_Decorator::CSoy::cost()
{
	return  beverage->cost() + 0.15f;
}

DesignPatterns_Decorator::string DesignPatterns_Decorator::CSoy::getDescription()
{
	return beverage->getDescription() + ",Soy";
}
