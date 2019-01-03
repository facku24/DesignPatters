#include <iostream>
#include "Pizza.h"
#include "PizzaStore.h"
//#include "SimplePizzaFactory.h"

int main (int argc, char* argv[])
{
	PizzaStore* nyStore = new NYPizzaStore;
	PizzaStore* chicagoStore = new ChicagoPizzaStore;

	Pizza* pizza = nyStore->orderPizza("cheese");
	std::cout << "Ethan ordered a " + pizza->getName() << std::endl;

	std::cout << std::endl;

	pizza = chicagoStore->orderPizza("cheese");
	std::cout << "Joel ordered a " + pizza->getName() << std::endl;
	return 0;
}