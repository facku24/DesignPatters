#include "PizzaStore.h"

Pizza* PizzaStore::orderPizza(std::string type)
{
	Pizza* pizza = createPizza("Cheese");

	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();
	
	return pizza;
}

Pizza* NYPizzaStore::createPizza(std::string type)
{
	Pizza* pizza = new NYStyleCheesePizza;

	return pizza;
}

Pizza* ChicagoPizzaStore::createPizza(std::string type)
{
	Pizza* pizza = new ChicagoStyleCheesePizza;

	return pizza;
}