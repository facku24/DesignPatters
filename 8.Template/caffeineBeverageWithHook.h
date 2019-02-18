#ifndef _CAFFEINEBEVERAGEWITHHHOOK_H_
#define _CAFFEINEBEVERAGEWITHHHOOK_H_

#include <string>

class CaffeineBeverageWithHook
{
public:
	virtual void prepareRecipe() final;
	virtual void brew() = 0;
	virtual void addCondiments() = 0;
	virtual void boliWater();
	virtual void pourInCup();
	virtual bool customerWantsCondiments();
};


class CoffeeWithHook : public CaffeineBeverageWithHook
{
public:
	void brew();
	void addCondiments();
	bool customerWantsCondiments();
private:
	bool getUserInput();
};

class TeaWithHook : public CaffeineBeverageWithHook
{
public:
	void brew();
	void addCondiments();
	bool customerWantsCondiments();
private:
	bool getUserInput();
};

#endif // _CAFFEINEBEVERAGEWITHHHOOK_H_