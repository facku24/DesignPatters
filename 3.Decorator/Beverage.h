#ifndef _BEVERAGE_H_
#define _BEVERAGE_H_

#include <string>

/***********************************************************
					INTERFACES
 **********************************************************/
class Beverage
{
	protected:
		std::string description = "Unknow beverage";
	public:
		virtual std::string getDescription() = 0;
		virtual double cost() = 0;
};

class CondimentDecorator : public Beverage
{
	public:
		virtual std::string getDescription() = 0;
};

/***********************************************************
					CAFFES
 **********************************************************/
class Espresso : public Beverage
{
	public:
		Espresso();
		std::string getDescription();
		double cost();
};

class HouseBlend : public Beverage
{
	public:
		HouseBlend();
		double cost();
};

class DarkRoast : public Beverage
{
	public:
		DarkRoast();
		std::string getDescription();
		double cost();
};

/***********************************************************
					DECORATORS
 **********************************************************/
class Mocha : public CondimentDecorator
{
	private:
		Beverage* beverage;
	public:
		Mocha(Beverage* beverage);
		std::string getDescription();
		double cost();
};

class Whip : public CondimentDecorator
{
	private:
		Beverage* beverage;
	public:
		Whip(Beverage* beverage);
		std::string getDescription();
		double cost();
};

class Soy : public CondimentDecorator
{
	private:
		Beverage* beverage;
	public:
		Soy(Beverage* beverage);
		std::string getDescription();
		double cost();
};

class Milk : public CondimentDecorator
{
	private:
		Beverage* beverage;
	public:
		Milk(Beverage* beverage);
		std::string getDescription();
		double cost();
};

#endif //_BEVERAGE_H_