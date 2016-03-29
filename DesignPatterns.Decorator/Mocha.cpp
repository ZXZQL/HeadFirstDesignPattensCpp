#include "Mocha.h"


DesignPatterns_Decorator::CMocha::CMocha(CBeverage * b)
{
	beverage = b;
}

DesignPatterns_Decorator::CMocha::~CMocha()
{
	if (beverage != nullptr)
	{
		delete beverage;
	}
}

double DesignPatterns_Decorator::CMocha::cost()
{
	return beverage->cost() + 0.2f;
}

DesignPatterns_Decorator::string DesignPatterns_Decorator::CMocha::getDescription()
{
	return beverage->getDescription() + ",Mocha";
}
