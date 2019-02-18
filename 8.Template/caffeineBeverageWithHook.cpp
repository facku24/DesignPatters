#include "caffeineBeverageWithHook.h"
#include <iostream>

void CaffeineBeverageWithHook::prepareRecipe()
{
	boliWater();
	brew();
	pourInCup();
	if (customerWantsCondiments()){
		addCondiments();
	}
}

void CaffeineBeverageWithHook::boliWater()
{
	std::cout << "Boiling water" << std::endl;
}

void CaffeineBeverageWithHook::pourInCup()
{
	std::cout << "Pouring into cup" << std::endl;
}

/*
	Here we've defined a method with a (mostly) empty default
	implementation. This method just returns true and does
	nothing else.
*/
bool CaffeineBeverageWithHook::customerWantsCondiments()
{
	return true;
}

void CoffeeWithHook::brew()
{
	std::cout << "Dripping Coffee through filter" << std::endl;
}

void CoffeeWithHook::addCondiments()
{
	std::cout << "Adding Sugar and Milk" << std::endl;
}

bool CoffeeWithHook::customerWantsCondiments()
{
	bool answer = getUserInput();

	return answer;
}

bool CoffeeWithHook::getUserInput()
{
	char c;
	std::cout << "Would you like milk and sugar with your coffee (y/n)?" << std::endl;

	std::cin.get(c);

	if (c == 'y' or c == 'Y'){
		return true;
	}
	return false;
}

void TeaWithHook::brew()
{
	std::cout << "Steeping the tea" << std::endl;
}

void TeaWithHook::addCondiments()
{
	std::cout << "Adding Lemon" << std::endl;
}

bool TeaWithHook::customerWantsCondiments()
{
	bool answer = getUserInput();

	return answer;
}

bool TeaWithHook::getUserInput()
{
	char c;
	std::cout << "Would you like lemon with your tea (y/n)?" << std::endl;

	std::cin.get(c);

	if (c == 'y' or c == 'Y'){
		return true;
	}
	return false;
}