#ifndef _GAMEACTOR_H_
#define _GAMEACTOR_H_

#include<string>

class GameActor
{
public:
	GameActor(std::string s);
	void printDirection(std::string s);
private:
	std::string nombre = "juan";
};
#endif // _GAMEACTOR_H_