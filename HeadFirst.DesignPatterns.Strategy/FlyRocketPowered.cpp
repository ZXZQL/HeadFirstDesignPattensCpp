#include "FlyRocketPowered.h"
#include "iostream"

using std::cout;
using std::endl;

DesignPattern::CFlyRocketPowered::CFlyRocketPowered()
{

}

DesignPattern::CFlyRocketPowered::~CFlyRocketPowered()
{
	cout << "\t\t\t\t==* Release Memory for FlyRocketPowered *==" << endl;
}

void DesignPattern::CFlyRocketPowered::fly()
{
	cout << "I'm flying with a rocket!"<<endl;
}
