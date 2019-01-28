#ifndef  _CEILINGFAN_H_
#define _CEILINGFAN_H_

#include <string>

class CeilingFan
{
public:
	CeilingFan(std::string location);
	void high();
	void medium();
	void low();
	void off();
	int getSpeed();
	void upSpeed();
private:
	static const int HIGH = 3;
	static const int MEDIUM = 2;
	static const int LOW = 1;
	static const int OFF = 0;
	std::string m_location;
	int m_speed;
};
#endif // _CEILINGFAN_H_