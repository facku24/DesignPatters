#include "command2.h"
#include <iostream>

LeftCommand::LeftCommand() {}

void LeftCommand::execute(GameActor& actor)
{
	actor.printDirection("LeftCommand Executed");
}

void RightCommand::execute(GameActor& actor)
{
	actor.printDirection("RightCommand Executed");
}

void DownCommand::execute(GameActor& actor)
{
	actor.printDirection("DownCommand Executed");
}

void UpCommand::execute(GameActor& actor)
{
	actor.printDirection("UpCommand Executed");
}