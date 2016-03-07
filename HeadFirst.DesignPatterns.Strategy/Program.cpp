#include "MallardDuck.h"

using namespace DesignPattern;

int main()
{
	MallardDuck *duck = new MallardDuck();
	duck->performFly();
	duck->performQuack();
	duck->display();
	delete duck;
}