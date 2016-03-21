
#include "Duck.h"
#include "iostream"

using std::cout;
using std::endl;

DesignPatterns_Strategy::CDuck::CDuck()
{
	flyBehavior = nullptr;
	quackBehavior = nullptr;
}

DesignPatterns_Strategy::CDuck::~CDuck()
{
	delete flyBehavior;
	delete quackBehavior;
	cout << "\t\t\t\t==* Release Memory for Duck *==" << endl;
}

void DesignPatterns_Strategy::CDuck::swin()
{
	cout << "All ducks float, even decoys!" << endl;
}

void DesignPatterns_Strategy::CDuck::setFlyBehavior(IFlyBehavior *fly)
{
	if (this->flyBehavior != nullptr)
	{
		delete this->flyBehavior;
	}
	this->flyBehavior = fly;
}

void DesignPatterns_Strategy::CDuck::setQuackBehavior(IQuackBehavior *quack)
{
	if (this->quackBehavior != nullptr)
	{
		delete this->quackBehavior;
	}
	this->quackBehavior = quack;
}

void DesignPatterns_Strategy::CDuck::performFly()
{
	flyBehavior->fly();
}

void DesignPatterns_Strategy::CDuck::performQuack()
{
	quackBehavior->quack();
}
