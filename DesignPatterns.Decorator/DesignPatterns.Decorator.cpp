#include "iostream"
#include "Mocha.h"
#include "DarkRoast.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "Soy.h"
#include "Whip.h"

using namespace std;
using namespace DesignPatterns_Decorator;

int main()
{
	CBeverage* beverage = new CEspresso();
	cout << " $" << beverage->cost() << "\t" << beverage->getDescription() << endl;

	beverage = new CWhip(beverage);
	cout << " $" << beverage->cost() << "\t" << beverage->getDescription() << endl;

	CBeverage *beverage2 = new CDarkRoast();
	beverage2 = new CMocha(beverage2);
	beverage2 = new CMocha(beverage2);
	beverage2 = new CWhip(beverage2);

	cout << " $" << beverage2->cost() << "\t" << beverage2->getDescription() << endl;

	CBeverage *beverage3 = new CHouseBlend();
	beverage3 = new CSoy(beverage3);
	beverage3 = new CMocha(beverage3);
	beverage3 = new CWhip(beverage3);
	cout << " $" << beverage3->cost() << "\t" << beverage3->getDescription() << endl;

	return 0;
}