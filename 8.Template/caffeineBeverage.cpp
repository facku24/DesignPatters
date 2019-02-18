#include "caffeineBeverage.h"
#include <iostream>

void CaffeineBeverage::prepareRecipe()
{
	boilWater();
	brew();
	pourInCup();
	addCondiments();
}

void CaffeineBeverage::boilWater()
{
	std::cout << "Boiling water" << std::endl;
}

void CaffeineBeverage::pourInCup()
{
	std::cout << "Pouring into cup" << std::endl;
}

void TeaBeverage::brew()
{
	std::cout << "Steeping the tea" << std::endl;
}

void TeaBeverage::addCondiments()
{
	std::cout << "Adding Lemon" << std::endl;
}

void CoffeeBeverage::brew()
{
	std::cout << "Dripping Coffe through filter" << std::endl;
}

void CoffeeBeverage::addCondiments()
{
	std::cout << "Adding Sugar and Milk" << std::endl;
}