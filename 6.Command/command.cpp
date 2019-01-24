#include "command.h"

void NoCommand::execute()
{

}

void NoCommand::undo()
{

}

std::string NoCommand::getName()
{
	return "none";
}

LightOnCommand::LightOnCommand(Light light)
{
	m_light = light;
}

void LightOnCommand::execute()
{
	m_light.on();
}

void LightOnCommand::undo()
{
	m_light.off();
}

std::string LightOnCommand::getName()
{
	return m_light.getName();
}

LightOffCommand::LightOffCommand(Light light)
{
	m_light = light;
}

void LightOffCommand::execute()
{
	m_light.off();
}

void LightOffCommand::undo()
{
	m_light.on();
}

std::string LightOffCommand::getName()
{
	return m_light.getName();
}

GarageDoorOpenCommand::GarageDoorOpenCommand(GarageDoor gd)
{
	gDoor = gd;
}

void GarageDoorOpenCommand::execute()
{
	gDoor.open();
}

void GarageDoorOpenCommand::undo()
{
	gDoor.close();
}

std::string GarageDoorOpenCommand::getName()
{
	return "Garage Door";
}

GarageDoorCloseCommand::GarageDoorCloseCommand(GarageDoor gd)
{
	gDoor = gd;
}

void GarageDoorCloseCommand::execute()
{
	gDoor.close();
}

void GarageDoorCloseCommand::undo()
{
	gDoor.open();
}

std::string GarageDoorCloseCommand::getName()
{
	return "Garage Door";
}

