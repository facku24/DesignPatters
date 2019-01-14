#include "singleton.h"
#include <iostream>

int main(int argc, char* argv[])
{
	Singleton* single1 = Singleton::getInstance();
	Singleton* single2 = Singleton::getInstance();

	/* Las direcciones deberian de ser las mismas */
	std::cout << single1 << std::endl;
	std::cout << single2 << std::endl;

	single1->printHello();
	single1->printNumber();
	single1->setNumber(2);
	/* Aun si fueran diferentes, ambas deben de tener el mismo valor en "number" */
	single1->printNumber();
	single2->printNumber();
	return 0;	
}