#include "ModelDuck.h"
#include "Quack.h"
#include "FlyNoWay.h"

using std::cout;
using std::endl;

DesignPattern::CModelDuck::CModelDuck()
{
	flyBehavior = new CFlyNoWay();
	quackBehavior = new CQuack();
}

DesignPattern::CModelDuck::~CModelDuck()
{
	cout << "\t\t\t\t==* Release Memory for ModelDuck *==" << endl;
}

void DesignPattern::CModelDuck::display()
{
	cout << "I am a model duck!"<<endl;
}
