#include "tea.h"

void Tea::prepareRecipe()
{
	boilWater();
	steepTeaBag();
	addLemon();
	pourCInCUp();
}

void Tea::boilWater()
{
	std::cout << "Boiling water" << std::endl;
}

void Tea::steepTeaBag()
{
	std::cout << "Steeping the tea" << std::endl;
}

void Tea::addLemon()
{
	std::cout << "Adding Lemon" << std::endl;
}

void Tea::pourCInCUp()
{
	std::cout << "Pouring into cup" << std::endl;
}
