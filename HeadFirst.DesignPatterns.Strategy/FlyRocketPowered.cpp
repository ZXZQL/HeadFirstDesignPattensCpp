#include "FlyRocketPowered.h"
#include "iostream"

using std::cout;
using std::endl;

DesignPatterns_Strategy::CFlyRocketPowered::CFlyRocketPowered()
{

}

DesignPatterns_Strategy::CFlyRocketPowered::~CFlyRocketPowered()
{
	cout << "\t\t\t\t==* Release Memory for FlyRocketPowered *==" << endl;
}

void DesignPatterns_Strategy::CFlyRocketPowered::fly()
{
	cout << "I'm flying with a rocket!"<<endl;
}
