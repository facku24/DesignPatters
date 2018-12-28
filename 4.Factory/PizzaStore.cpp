#include "PizzaStore.h"

PizzaStore::PizzaStore(SimplePizzaFactory fact)
{
	factory = fact;
}

Pizza* PizzaStore::orderPizza(std::string type)
{
	Pizza* pizza = factory.createPizza("Cheese");

	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();
	
	return pizza;
}