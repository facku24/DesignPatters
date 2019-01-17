#include <iostream>

/*
	COMPILE: g++ main.cpp
*/

void handleInput(char c);
void firedLeft();
void firedDown();
void firedRight();
void firedUp();


int main(int argc, char* argv[])
{

	char c;

	std::cin >> c;

	handleInput(c);

	return 0;
}

void handleInput(char c)
{
	switch(c)
	{
		case 'a': 
			firedLeft();
			break;
		case 's': 
			firedDown();
			break;
		case 'd': 
			firedRight();
			break;
		case 'w': 
			firedUp();
			break;
		default: 
			std::cout << "Wrong input" << std::endl;
	}	
}

void firedRight()
{
	std::cout << "Let's right" << std::endl; 
}

void firedDown()
{
	std::cout << "Let's down" << std::endl; 
}

void firedLeft()
{
	std::cout << "Let's left" << std::endl; 
}

void firedUp()
{
	std::cout << "Let's up" << std::endl; 

}
