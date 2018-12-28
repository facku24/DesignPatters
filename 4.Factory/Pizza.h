#ifndef _PIZZA_H_
#define _PIZZA_H_

class Pizza
{
public:
	virtual void prepare() = 0;
	virtual void bake() = 0;
	virtual void cut() = 0;
	virtual void box() = 0;
};

class CheesePizza : public Pizza
{
public:
	void prepare();
	void bake(); 
	void cut();
	void box();
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