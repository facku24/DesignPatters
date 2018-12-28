#ifndef _SIMPLEPIZZAFACTORY_H_
#define _SIMPLEPIZZAFACTORY_H_

#include "Pizza.h"
#include <string>

class SimplePizzaFactory
{
public:
	Pizza* createPizza(std::string type);
};
#endif //_SIMPLEPIZZAFACTORY_H_