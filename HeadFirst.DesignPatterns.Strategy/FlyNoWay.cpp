#include "FlyNoWay.h"
#include "iostream"

using std::cout;
using std::endl;

DesignPatterns_Strategy::CFlyNoWay::CFlyNoWay()
{
}


DesignPatterns_Strategy::CFlyNoWay::~CFlyNoWay()
{
	cout << "\t\t\t\t==* Release Memory for FlyNoWay *==" << endl;
}

void DesignPatterns_Strategy::CFlyNoWay::fly()
{
	cout << "I can't fly!" << endl;
}
