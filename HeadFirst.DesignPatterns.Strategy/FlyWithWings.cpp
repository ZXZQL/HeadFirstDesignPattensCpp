#include "FlyWithWings.h"
#include "iostream"

using std::cout;
using std::endl;

DesignPattern::CFlyWithWings::CFlyWithWings()
{
}

DesignPattern::CFlyWithWings::~CFlyWithWings()
{
	cout << "\t\t\t\t==* Release Memory for FlyWithWings *==" << endl;
}

void DesignPattern::CFlyWithWings::fly()
{
	cout << "I am flying!" << endl;
}
