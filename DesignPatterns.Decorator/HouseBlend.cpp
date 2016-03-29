#include "HouseBlend.h"


DesignPatterns_Decorator::CHouseBlend::CHouseBlend()
{
	description = "House Blend Coffee";
}

DesignPatterns_Decorator::CHouseBlend::~CHouseBlend()
{

}

double DesignPatterns_Decorator::CHouseBlend::cost()
{
	return 0.89f;
}
