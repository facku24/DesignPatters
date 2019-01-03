#ifndef _PIZZASTORE_H_
#define _PIZZASTORE_H_

#include <string>
//#include "SimplePizzaFactory.h"
#include "Pizza.h"

class PizzaStore
{
public:
	Pizza* orderPizza(std::string type);
protected:
	virtual Pizza* createPizza(std::string type) = 0;
};

class NYPizzaStore : public PizzaStore
{
public:
	Pizza* createPizza(std::string type);
};

class ChicagoPizzaStore : public PizzaStore
{
public:
	Pizza* createPizza(std::string type);
};
#endif // _PIZZASTORE_H_