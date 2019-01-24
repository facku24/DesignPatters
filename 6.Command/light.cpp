#include "light.h"
#include <iostream>

Light::Light()
{
	m_place = "none";
}

Light::Light(std::string place)
{
	m_place = place;
}
void Light::on()
{
	std::cout << m_place << " light is on" << std::endl;
}

void Light::off()
{
	std::cout << m_place << " light is off" << std::endl;
}

std::string Light::getName()
{
	return m_place;
}