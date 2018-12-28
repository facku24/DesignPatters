#ifndef _PIZZASTORE_H_
#define _PIZZASTORE_H_

#include <string>
#include "SimplePizzaFactory.h"
#include "Pizza.h"

class PizzaStore
{
private:
	SimplePizzaFactory factory;

public:
	PizzaStore(SimplePizzaFactory factory);
	Pizza* orderPizza(std::string type);
};
#endif // _PIZZASTORE_H_