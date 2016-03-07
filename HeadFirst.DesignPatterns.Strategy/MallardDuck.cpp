#include "Duck.h"
#include "FlyWithWings.h"
#include "Quack.h"
#include "MallardDuck.h"
#include "iostream"

using namespace DesignPattern;

using std::cout;
using std::endl;

MallardDuck::MallardDuck()
{
	flyBehavior = new FlyWithWings();
	quackBehavior = new Quack();
}

MallardDuck::~MallardDuck()
{
}

void MallardDuck::display()
{
	cout << "I'm a Mallard duck!" << endl;
}