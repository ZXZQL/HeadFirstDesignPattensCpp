
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
	cout << "\t\t\t\t==* Release Memory for Duck *==" << endl;
}

void DesignPattern::CDuck::swin()
{
	cout << "All ducks float, even decoys!" << endl;
}

void DesignPattern::CDuck::setFlyBehavior(IFlyBehavior *fly)
{
	if (this->flyBehavior != nullptr)
	{
		delete this->flyBehavior;
	}
	this->flyBehavior = fly;
}

void DesignPattern::CDuck::setQuackBehavior(IQuackBehavior *quack)
{
	if (this->quackBehavior != nullptr)
	{
		delete this->quackBehavior;
	}
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
