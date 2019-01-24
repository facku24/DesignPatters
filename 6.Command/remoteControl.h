#ifndef _REMOTECONTROL_H_
#define _REMOTECONTROL_H_

#include "command.h"
#include <vector>
#include <string>

class RemoteControl
{
public:
	RemoteControl();
	~RemoteControl();
	void setCommand(int slot, Command* onCommand, Command* offCommand);
	void onButtonWasPushed(int slot);
	void offButtonWasPushed(int slot);
	std::string toString();
private:
	std::vector<Command*> onCommands;
	std::vector<Command*> offCommands;
};
#endif // _REMOTECONTROL_H_