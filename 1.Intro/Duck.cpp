#include "Duck.h"
#include <iostream>

Duck::Duck()
{
	std::cout << "Duck::Duck()" << std::endl;
}

Duck::~Duck()
{
	std::cout << "Duck::~Duck()" << std::endl;
}

Mallock::Mallock()
{
	std::cout << "Mallock::Mallock()" << std::endl;
}

Mallock::~Mallock()
{
	std::cout << "Mallock::~Mallock()" << std::endl;
}

void Mallock::swim()
{
	std::cout << "Mallock::swim()" << std::endl;
}

void Mallock::display()
{
	std::cout << "Mallock::display()" << std::endl;
}

// This methos come from the interface
void Mallock::performFly()
{
	std::cout << "Mallock::performFly()" << std::endl;
}

void Mallock::performQuack()
{
	std::cout << "Mallock::performQuack()" << std::endl;
}

Rubber::Rubber()
{
	std::cout << "Rubber::Rubber()" << std::endl;
}

Rubber::~Rubber()
{
	std::cout << "Rubber::~Rubber()" << std::endl;
}

void Rubber::swim()
{
	std::cout << "Rubber::swim()" << std::endl;
}

void Rubber::display()
{
	std::cout << "Rubber::display()" << std::endl;
}

// This methos come from the interface
void Rubber::performFly()
{
	std::cout << "Rubber::performFly()" << std::endl;
}

void Rubber::performQuack()
{
	std::cout << "Rubber::performQuack()" << std::endl;
}
