#include "iostream"
#include "Mocha.h"
#include "DarkRoast.h"
#include "Espresso.h"

using namespace std;
using namespace DesignPatterns_Decorator;

int main()
{
	CBeverage* beverage = new CEspresso();
	cout << beverage->getDescription() << " $" << beverage->cost() << endl;

	CBeverage *beverage2 = new CDarkRoast();
	beverage2 = new CMocha(beverage2);
	beverage2 = new CMocha(beverage2);
	beverage2 = new CMocha(beverage2);

	cout << beverage2->getDescription() << " $" << beverage2->cost() << endl;

	return 0;
}