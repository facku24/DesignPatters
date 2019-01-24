#ifndef _REMOTECONTROLWITHUNDO_H_
#define _REMOTECONTROLWITHUNDO_H_

#include "command.h"
#include <vector>
#include <string>

class RemoteControlWithUndo
{
public:
	RemoteControlWithUndo();
	~RemoteControlWithUndo();
	void setCommand(int slot, Command* onCommand, Command* offCommand);
	void onButtonWasPushed(int slot);
	void offButtonWasPushed(int slot);
	std::string toString();
private:
	std::vector<Command*> onCommands;
	std::vector<Command*> offCommands;
	Command* undoCommand;
};
#endif // _REMOTECONTROLWITHUNDO_H_