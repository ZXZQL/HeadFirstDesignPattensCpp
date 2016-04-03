#include "DarkRoast.h"

DesignPatterns_Decorator::CDarkRoast::CDarkRoast()
{
	description = "Dark Roast Coffee";
}

DesignPatterns_Decorator::CDarkRoast::~CDarkRoast()
{

}

double DesignPatterns_Decorator::CDarkRoast::cost()
{
	return 0.99f;
}
