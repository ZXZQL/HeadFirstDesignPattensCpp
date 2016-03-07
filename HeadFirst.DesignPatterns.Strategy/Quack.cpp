#include "Quack.h"
#include "iostream"

using namespace DesignPattern;
using std::cout;
using std::endl;

Quack::Quack()
{
}


Quack::~Quack()
{
}

void DesignPattern::Quack::quack()
{
	cout << "Quack." << endl;
}
