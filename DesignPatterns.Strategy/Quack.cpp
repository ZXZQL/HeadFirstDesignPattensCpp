#include "QuackBehavior.h"
#include "Quack.h"
#include "iostream"

using std::cout;
using std::endl;

DesignPatterns_Strategy::CQuack::CQuack()
{
}

DesignPatterns_Strategy::CQuack::~CQuack()
{
	cout << "\t\t\t\t==* Release Memory for Quack *==" << endl;
}

void DesignPatterns_Strategy::CQuack::quack()
{
	cout << "Quack." << endl;
}
