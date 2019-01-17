#include "inputHandler1.h"
#include <iostream>

/*
	COMPILE: g++ main1.cpp command1.cpp inputHandler1.cpp
*/

int main(int argc, char* argv[])
{
	InputHandler ih;
	char c;

	do
	{
		std::cin >> c;
		ih.handleInput(c);

	} while (c != 'q');

	std::cout << "Exit" << std::endl;

	return 0;
}