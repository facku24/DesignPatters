#ifndef _LIGHT_H_ 
#define _LIGHT_H_

#include <string>

class Light
{
public:
	Light();
	Light(std::string place);
	void on();
	void off();
	std::string getName();
private:
	std::string m_place;
};

#endif // _LIGHT_H_