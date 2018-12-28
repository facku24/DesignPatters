#include<iostream>
#include"Beverage.h"

int main(int argc, char* argv[])
{
	Beverage* beverage = new Espresso();
	std::cout << beverage->getDescription() << ", $ " << beverage->cost() << std::endl;
	Beverage* beverage2 = new DarkRoast();
	beverage2 = new Mocha(beverage2);
	std::cout << beverage2->getDescription() << ", $ " << beverage2->cost() << std::endl;
	beverage2 = new Whip(beverage2);
	std::cout << beverage2->getDescription() << ", $ " << beverage2->cost() << std::endl;
	/*
	Beverage beverage3 = new HouseBlend();
	beverage3 = new Soy(beverage3);
	beverage3 = new Mocha(beverage3);
	beverage3 = new Whip(beverage3);
	System.out.println(beverage3.getDescription()
	+ “ $” + beverage3.cost());
	*/
	return 0;
}