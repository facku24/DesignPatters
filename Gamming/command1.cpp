#include "command1.h"
#include <iostream>
//Command::~Command(){ }

LeftCommand::LeftCommand() {}

void LeftCommand::execute()
{
	std::cout << "LeftCommand Executed" << std::endl;
}

void RightCommand::execute()
{
	std::cout << "RightCommand Executed" << std::endl;
}

void DownCommand::execute()
{
	std::cout << "DownCommand Executed" << std::endl;
}

void UpCommand::execute()
{
	std::cout << "UpCommand Executed" << std::endl;
}
