#ifndef _COMMAND2_H_
#define _COMMAND2_H_

#include "gameActor.h"

class Command
{
public:
	//virtual ~Command();
	virtual void execute(GameActor& actor) = 0;
};

class LeftCommand : public Command
{
public:
	LeftCommand();
	void execute(GameActor& actor);
};

class RightCommand : public Command
{
public:
	void execute(GameActor& actor);
};

class UpCommand : public Command
{
public:
	void execute(GameActor& actor);
};

class DownCommand : public Command
{
public:
	void execute(GameActor& actor);
};

#endif  //_COMMAND2_H_