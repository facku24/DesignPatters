#include "caffeineBeverageWithHook.h"
#include <iostream>

int main(int argc, char* argv[])
{

	CaffeineBeverageWithHook* caffeineHook;
	TeaWithHook teaHook;
	CoffeeWithHook coffeeHook;

	std::cout << "\nMaking tea..." << std::endl;
	caffeineHook = &teaHook;
	caffeineHook->prepareRecipe();

	std::cout << "\nMaking coffee" << std::endl;
	caffeineHook = &coffeeHook;
	caffeineHook->prepareRecipe();
	
	return 0;
}