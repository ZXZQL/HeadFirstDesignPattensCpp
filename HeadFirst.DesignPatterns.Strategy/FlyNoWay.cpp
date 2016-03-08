#include "FlyNoWay.h"
#include "iostream"

using std::cout;
using std::endl;

DesignPattern::CFlyNoWay::CFlyNoWay()
{
}


DesignPattern::CFlyNoWay::~CFlyNoWay()
{
	cout << "\t\t\t\t==* Release Memory for FlyNoWay *==" << endl;
}

void DesignPattern::CFlyNoWay::fly()
{
	cout << "I can't fly!" << endl;
}
