#include "SimplePizzaFactory.h"

Pizza* SimplePizzaFactory::createPizza(std::string type)
{
	Pizza* pizza = new CheesePizza;

	return pizza;
}