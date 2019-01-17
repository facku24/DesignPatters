#include "inputHandler2.h"
#include "gameActor.h"
#include <iostream>

/*
	COMPILE: g++ main2.cpp command2.cpp inputHandler2.cpp
*/

int main(int argc, char* argv[])
{
	GameActor a1("Facu");
	Command* command;
	InputHandler ih;
	char c;

	do
	{
		std::cin >> c;
		command = ih.handleInput(c);

		if (command)
		{
			std::cout << "command valid" << std::endl;
			command->execute(a1);
		}
		else
		{
			std::cout << "command not valid" << std::endl;
			std::cout << std::endl;
		}

	} while (c != 'q');

	std::cout << "Exit Player Facu" << std::endl;

	GameActor a2("Carlos");
	do
	{
		std::cin >> c;
		command = ih.handleInput(c);

		if (command)
		{
			std::cout << "command valid" << std::endl;
			command->execute(a2);
		}
		else
		{
			std::cout << "command not valid" << std::endl;
			std::cout << std::endl;
		}

	} while (c != 'q');

	std::cout << "Exit Player Carlos" << std::endl;

	return 0;
}