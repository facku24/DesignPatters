#include "command.h"
#include <iosteam>

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

CeilingFanHighCommand::CeilingFanHighCommand(CeilingFan ceilingFan)
{
	m_ceilingFan = ceilingFan;
}

void CeilingFanHighCommand::execute()
{
	prevSpeed = m_ceilingFan.prevSpeed();
	ceilingFan.upSpeed();
	std::cout << "The new speed is: " << std::toString(ceilingFan.getSpeed()) << std::endl;
}

void CeilingFanHighCommand::undo()
{
	switch (prevSpeed){
		case CeilingFan.HIGH:
			m_ceilingFan.high();
			break;
		case CeilingFan.MEDIUM:
			m_ceilingFan.medium();
			break;
		case CeilingFan.LOW:
			m_ceilingFan.low();
			break;
		case CeilingFan.OFF:
			m_ceilingFan.off();
			break;
	}
}

std::string CeilingFanHighCommand::getName()
{
	return "Ceiling Fan High";
}