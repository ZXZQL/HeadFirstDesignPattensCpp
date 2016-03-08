#include "Duck.h"
#include "MallardDuck.h"
#include "ModelDuck.h"
#include "FlyRocketPowered.h"

using namespace DesignPattern;

int main()
{
	CDuck *duck = new CMallardDuck();
	duck->display();
	duck->swin();
	duck->performFly();
	duck->performQuack();
	delete duck;

	duck = new CModelDuck();
	duck->display();
	duck->swin();
	duck->performFly();
	duck->performQuack();
	
	duck->setFlyBehavior(new CFlyRocketPowered());
	duck->display();
	duck->performFly();
	duck->performQuack();

	delete duck;
}