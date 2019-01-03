#ifndef _PIZZA_H_
#define _PIZZA_H_

#include <string>

class Pizza
{
protected:
	std::string name;
	std::string dough;
	std::string sauce;
public:
	void prepare();
	void bake();
	virtual void cut();
	void box();
	std::string getName();
};

class NYStyleCheesePizza : public Pizza
{
public:
	NYStyleCheesePizza();
};

class ChicagoStyleCheesePizza : public Pizza
{
public:
	ChicagoStyleCheesePizza();
	void cut();
};

/*class VeggiePizza : public Pizza
{
public:
	void prepare();
	void bake(); 
	void cut();
	void box();
};

class ClamPizza : public Pizza
{
public:
	void prepare();
	void bake(); 
	void cut();
	void box();
};

class PepperoniPizza : public Pizza
{
public:
	void prepare();
	void bake(); 
	void cut();
	void box();
};*/
#endif // _PIZZA_H_