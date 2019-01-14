#include "singleton.h"
#include <iostream>

Singleton* Singleton::uniqueInstance = 0;

Singleton::Singleton()
{
	std::cout << "Creating Instance" << std::endl;
}

Singleton::~Singleton()
{
	std::cout << "Deleting Instance" << std::endl;
	if (uniqueInstance != nullptr)
	{
		delete uniqueInstance;
		uniqueInstance = nullptr;
	}
}

Singleton* Singleton::getInstance()
{
	// Logic to instance one and only one instance
	if (uniqueInstance == nullptr)
	{
		uniqueInstance = new Singleton();
	}

	return uniqueInstance;
}

void Singleton::printHello()
{
	std::cout << "Hello World" << std::endl;
}

void Singleton::printNumber()
{
	std::cout << number << std::endl;
}

void Singleton::setNumber(int num)
{
	number = num;
}
