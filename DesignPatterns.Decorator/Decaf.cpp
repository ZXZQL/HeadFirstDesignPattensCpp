#include "Decaf.h"

DesignPatterns_Decorator::CDecaf::CDecaf()
{
	description = "Decaf Coffee";
}


DesignPatterns_Decorator::CDecaf::~CDecaf()
{
}

double DesignPatterns_Decorator::CDecaf::cost()
{
	return 1.05f;
}
