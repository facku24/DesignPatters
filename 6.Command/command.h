#ifndef _COMMAND_H_
#define _COMMAND_H_

#include "light.h"
#include "garageDoor.h"

#include <string>

class Command
{
public:
	// Simple. All we need is one method called execute().
	virtual void execute() = 0;
	virtual void undo() = 0;
	virtual std::string getName() = 0;
};

class NoCommand : public Command
{
	void execute();
	void undo();
	std::string getName();
};

class LightOnCommand : public Command
{
public:
	LightOnCommand(Light light);
	void execute();
	void undo();
	std::string getName();
private:
	Light m_light;
};

class LightOffCommand : public Command
{
public:
	LightOffCommand(Light light);
	void execute();
	void undo();
	std::string getName();
private:
	Light m_light;
};

class GarageDoorOpenCommand : public Command
{
public:
	GarageDoorOpenCommand(GarageDoor door);
	void execute();
	void undo();
	std::string getName();
private:
	GarageDoor gDoor;
};

class GarageDoorCloseCommand : public Command
{
public:
	GarageDoorCloseCommand(GarageDoor door);
	void execute();
	void undo();
	std::string getName();
private:
	GarageDoor gDoor;
};

#endif // _COMMAND_H_
