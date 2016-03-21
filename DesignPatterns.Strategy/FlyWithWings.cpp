#include "FlyWithWings.h"
#include "iostream"

using std::cout;
using std::endl;

DesignPatterns_Strategy::CFlyWithWings::CFlyWithWings()
{
}

DesignPatterns_Strategy::CFlyWithWings::~CFlyWithWings()
{
	cout << "\t\t\t\t==* Release Memory for FlyWithWings *==" << endl;
}

void DesignPatterns_Strategy::CFlyWithWings::fly()
{
	cout << "I am flying!" << endl;
}
