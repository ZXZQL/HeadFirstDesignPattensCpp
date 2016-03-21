#include "Duck.h"
#include "FlyWithWings.h"
#include "Quack.h"
#include "MallardDuck.h"
#include "iostream"

using std::cout;
using std::endl;

DesignPatterns_Strategy::CMallardDuck::CMallardDuck()
{
	flyBehavior = new CFlyWithWings();
	quackBehavior = new CQuack();
}

DesignPatterns_Strategy::CMallardDuck::~CMallardDuck()
{
	cout << "\t\t\t\t==* Release Memory for MallardDuck *=="<<endl;
}

void DesignPatterns_Strategy::CMallardDuck::display()
{
	cout << "I'm a mallardduck!" << endl;
}