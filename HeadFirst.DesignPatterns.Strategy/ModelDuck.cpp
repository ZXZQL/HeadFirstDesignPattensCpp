#include "ModelDuck.h"

using std::cout;
using std::endl;

DesignPattern::CModelDuck::CModelDuck()
{

}

DesignPattern::CModelDuck::~CModelDuck()
{
	cout << "==* Release Memory for ModelDuck *==" << endl;
}

void DesignPattern::CModelDuck::display()
{
	cout << "I am a model duck!";
}
