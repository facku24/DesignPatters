#include <iostream>
#include "Pizza.h"
#include "PizzaStore.h"
#include "SimplePizzaFactory.h"

int main (int argc, char* argv[])
{
	SimplePizzaFactory spf;

	PizzaStore store(spf);

	Pizza* pizza = store.orderPizza("cheese");

	return 0;
}