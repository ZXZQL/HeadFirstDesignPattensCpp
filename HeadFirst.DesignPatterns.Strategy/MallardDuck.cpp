#include "Duck.h"
#include "FlyWithWings.h"
#include "Quack.h"
#include "MallardDuck.h"
#include "iostream"

using std::cout;
using std::endl;

DesignPattern::CMallardDuck::CMallardDuck()
{
	flyBehavior = new CFlyWithWings();
	quackBehavior = new CQuack();
}

DesignPattern::CMallardDuck::~CMallardDuck()
{
	cout << "\t\t\t\t==* Release Memory for MallardDuck *=="<<endl;
}

void DesignPattern::CMallardDuck::display()
{
	cout << "I'm a mallardduck!" << endl;
}