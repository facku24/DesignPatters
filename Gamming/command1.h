#ifndef _COMMAND1_H_
#define _COMMAND1_H_

class Command
{
public:
	virtual void execute() = 0;
	//virtual ~Command();
};

class LeftCommand : public Command
{
public:
	LeftCommand();
	void execute();
};

class RightCommand : public Command
{
public:
	void execute();
};

class UpCommand : public Command
{
public:
	void execute();
};

class DownCommand : public Command
{
public:
	void execute();
};

#endif  //_COMMAND1_H_