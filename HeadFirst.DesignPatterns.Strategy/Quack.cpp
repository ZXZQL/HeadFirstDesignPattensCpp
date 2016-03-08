#include "QuackBehavior.h"
#include "Quack.h"
#include "iostream"

using std::cout;
using std::endl;

DesignPattern::Quack::Quack()
{
}


DesignPattern::Quack::~Quack()
{

}

void DesignPattern::Quack::quack()
{
	cout << "Quack." << endl;
}
