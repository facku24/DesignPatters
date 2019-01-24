#ifndef _SIMPLEREMOTECONTROL_H_
#define _SIMPLEREMOTECONTROL_H_

#include "command.h"

class SimpleRemoteControl
{
public:
	SimpleRemoteControl();
	void setCommand(Command* command);
	void buttonWasPressed();
private:
	Command* slot;
};

#endif // _SIMPLEREMOTECONTROL_H_