#include "gameActor.h"
#include <iostream>
#include <string>

GameActor::GameActor(std::string s) : nombre(s)
{
	std::cout << "in" << std::endl;
}

void GameActor::printDirection(std::string s)
{
	std::cout << nombre + " : " + s << std::endl;
}