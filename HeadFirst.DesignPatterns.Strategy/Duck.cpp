#include "Duck.h"
#include "FlyBehavior.h"
#include "QuackBehavior.h"
#include "iostream"

using namespace DesignPattern;

using std::cout;
using std::endl;

Duck::Duck()
{
	flyBehavior = nullptr;
	quackBehavior = nullptr;
}

Duck::~Duck()
{
	delete flyBehavior;
	delete quackBehavior;
}

void Duck::swin()
{
	cout << "All ducks float, even decoys!" << endl;
}

void Duck::setFlyBehavior(FlyBehavior *fly)
{
	this->flyBehavior = fly;
}

void Duck::setQuackBehavior(QuackBehavior *quack)
{
	this->quackBehavior = quack;
}

void DesignPattern::Duck::performFly()
{
	flyBehavior->fly();
}

void DesignPattern::Duck::performQuack()
{
	quackBehavior->quack();
}
