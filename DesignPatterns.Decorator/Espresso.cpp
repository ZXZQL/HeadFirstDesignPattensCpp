#include "Espresso.h"

DesignPatterns_Decorator::CEspresso::CEspresso()
{
	description = "Espresso";
}

DesignPatterns_Decorator::CEspresso::~CEspresso()
{

}

double DesignPatterns_Decorator::CEspresso::cost()
{
	return 1.99f;
}
