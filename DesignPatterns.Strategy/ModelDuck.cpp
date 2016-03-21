#include "ModelDuck.h"
#include "Quack.h"
#include "FlyNoWay.h"

using std::cout;
using std::endl;

DesignPatterns_Strategy::CModelDuck::CModelDuck()
{
	flyBehavior = new CFlyNoWay();
	quackBehavior = new CQuack();
}

DesignPatterns_Strategy::CModelDuck::~CModelDuck()
{
	cout << "\t\t\t\t==* Release Memory for ModelDuck *==" << endl;
}

void DesignPatterns_Strategy::CModelDuck::display()
{
	cout << "I am a model duck!"<<endl;
}
