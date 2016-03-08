#include "QuackBehavior.h"
#include "Quack.h"
#include "iostream"

using std::cout;
using std::endl;

DesignPattern::CQuack::CQuack()
{
}

DesignPattern::CQuack::~CQuack()
{
	cout << "\t\t\t\t==* Release Memory for Quack *==" << endl;
}

void DesignPattern::CQuack::quack()
{
	cout << "Quack." << endl;
}
