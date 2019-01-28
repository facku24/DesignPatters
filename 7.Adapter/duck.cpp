#include "duck.h"
#include <iostream>

void MallardDuck::quack()
{
	std::cout << "Quack" << std::endl;
}

void MallardDuck::fly()
{
	std::cout << "I'm flying" << std::endl;
}

TurkeyAdapter::TurkeyAdapter(Turkey* turkey)
{
	m_turkey = turkey;
}

void TurkeyAdapter::quack()
{
	m_turkey->gobble();
}

void TurkeyAdapter::fly()
{
	for(int i = 0; i < 5; i++)
	{
		m_turkey->fly();
	}
}