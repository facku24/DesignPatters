#include "ceilingFan.h"

CeilingFan::CeilingFan(std::string location)
{
	m_location = location;
	speed = OFF;
}

void CeilingFan::high()
{
	speed = HIGH;
}

void CeilingFan::medium()
{
	speed = MEDUIM;
}

void CeilingFan::low()
{
	speed = LOW;
}

void CeilingFan::off()
{
	speed = OFF;
}

int CeilingFan::getSpeed()
{
	return speed;
}

void CeilingFan::upSpeed()
{
	switch(m_speed){
		case CeilingFan.OFF: m_speed = CeilingFan.LOW; break;
		case CeilingFan.LOW: m_speed = CeilingFan.MEDIUM; break;
		case CeilingFan.MEDIUM: m_speed = CeilingFan.HIGH; break;
		case CeilingFan.HIGH: m_speed = CeilingFan.OFF; break;
	}
}