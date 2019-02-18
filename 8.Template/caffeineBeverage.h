#ifndef _CAFFEINEBEVERAGE_H_
#define _CAFFEINEBEVERAGE_H_

class CaffeineBeverage
{
public:
	virtual void prepareRecipe() final;
	virtual void brew() = 0;
	virtual void addCondiments() = 0;
	void boilWater();
	void pourInCup();
};

class TeaBeverage : public CaffeineBeverage
{
public:
	void brew();
	void addCondiments();
};

class CoffeeBeverage : public CaffeineBeverage
{
	void brew();
	void addCondiments();
};

#endif // _CAFFEINEBEVERAGE_H_