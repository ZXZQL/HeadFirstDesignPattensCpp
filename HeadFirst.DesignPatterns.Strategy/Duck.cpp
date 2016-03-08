
#include "Duck.h"
#include "iostream"

using std::cout;
using std::endl;

DesignPattern::CDuck::CDuck()
{
	flyBehavior = nullptr;
	quackBehavior = nullptr;
}

DesignPattern::CDuck::~CDuck()
{
	delete flyBehavior;
	delete quackBehavior;
	cout << "==* Release Memory for Duck *==" << endl;
}

void DesignPattern::CDuck::swin()
{
	cout << "All ducks float, even decoys!" << endl;
}

void DesignPattern::CDuck::setFlyBehavior(IFlyBehavior *fly)
{
	this->flyBehavior = fly;
}

void DesignPattern::CDuck::setQuackBehavior(IQuackBehavior *quack)
{
	this->quackBehavior = quack;
}

void DesignPattern::CDuck::performFly()
{
	flyBehavior->fly();
}

void DesignPattern::CDuck::performQuack()
{
	quackBehavior->quack();
}
