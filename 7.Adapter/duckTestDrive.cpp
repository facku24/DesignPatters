#include "duck.h"
#include <iostream>

void testDuck(Duck* duck);

int main(int argc, char* argv[])
{
	MallardDuck duck;

	WildTurkey turkey;
	Duck* turkeyAdapter = new TurkeyAdapter(&turkey);

	std::cout << "The Turkey says... ";
	turkey.gobble();
	turkey.fly();

	std::cout << "\nThe Duck says... ";
	testDuck(&duck);

	std::cout << "\nThe DuckAdapter says...";
	testDuck(turkeyAdapter);
	return 0;
}

void testDuck(Duck* duck)
{
	duck->quack();
	duck->fly();
}