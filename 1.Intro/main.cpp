#include <iostream>
#include "Duck.h"

int main (int argc, char* argv[])
{
	Duck* duck1 = new Mallock();
	duck1->performFly();
	Duck* duck2 = new Rubber();
	duck2->performFly();
	return 0;
}