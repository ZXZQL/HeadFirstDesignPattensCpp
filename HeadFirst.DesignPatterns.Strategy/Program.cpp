#include "Duck.h"
#include "MallardDuck.h"

using namespace DesignPattern;

int main()
{
	CMallardDuck *duck = new CMallardDuck();
	duck->performFly();
	duck->performQuack();
	duck->display();
	delete duck;
}