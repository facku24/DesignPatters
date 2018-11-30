#include<iostream>
#include"Beverage.h"

/*std::string Beverage::getDescription()
{
	return description;
}*/

Espresso::Espresso()
{
	description = "Espresso";
}

std::string Espresso::getDescription()
{
	return description;
}

double Espresso::cost()
{
	return 1.99;
}

HouseBlend::HouseBlend()
{
	description = "House Blend Coffe";
}

double HouseBlend::cost()
{
	return 0.89;
}

DarkRoast::DarkRoast()
{
	description = "Dark Roast Coffe";
}

std::string DarkRoast::getDescription()
{
	return description;
}

double DarkRoast::cost()
{
	return 1.23;
}

Mocha::Mocha(Beverage* bevPtr)
{
	beverage = bevPtr;
}

std::string Mocha::getDescription()
{
	//std::string description = beverage->getDescription() + " Mocha";
	return (beverage->getDescription() + " Mocha");
}

double Mocha::cost()
{
	return (beverage->cost() + .20);
}

Whip::Whip(Beverage* bevPtr)
{
	beverage = bevPtr;
}

std::string Whip::getDescription()
{
	return (beverage->getDescription() + " Whip");
}

double Whip::cost()
{
	return (beverage->cost() + .35);
}