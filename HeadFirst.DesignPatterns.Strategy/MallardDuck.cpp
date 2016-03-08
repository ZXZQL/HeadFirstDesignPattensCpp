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
	quackBehavior = new Quack();
}

DesignPattern::CMallardDuck::~CMallardDuck()
{
	cout << "==* Release Memory for MallardDuck *=="<<endl;
}

void DesignPattern::CMallardDuck::display()
{
	cout << "I'm a Mallard duck!" << endl;
}