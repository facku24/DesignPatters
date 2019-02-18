//#include "caffeineBeverage.h"
#include <iostream>

class Base
{
public:
	virtual void myfun() final
	{
		std::cout << "myfun() in Base" << std::endl;
	}
};

class Derived : public Base
{
public:
	/*void myfun()
	{
		std::cout << "myfun() in Derived\n" << std::endl;
	}*/
};

int main(int argc, char* argv[])
{
	/*TeaBeverage myTea;

	myTea.prepareRecipe();*/

	Derived d;
	Base* b = &d;
	b->myfun();

	return 0;
}