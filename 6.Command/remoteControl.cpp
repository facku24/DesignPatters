#include "remoteControl.h"

RemoteControl::RemoteControl()
{
	onCommands.reserve(7);
	offCommands.reserve(7);

	Command* noCommand = new NoCommand();

	for(int i = 0; i < 7; i++)
	{
		onCommands[i] = noCommand;
		offCommands[i] = noCommand;
	}
	undoCommand = noCommand;
}

RemoteControl::~RemoteControl()
{
	
}

void RemoteControl::setCommand(int slot, Command* onCommand, Command* offCommand)
{
	onCommands[slot] = onCommand;
	offCommands[slot] = offCommand;
}

void RemoteControl::onButtonWasPushed(int slot)
{
	onCommands[slot]->execute();
}

void RemoteControl::offButtonWasPushed(int slot)
{
	offCommands[slot]->execute();
}

std::string RemoteControl::toString()
{
	std::string phrase("\n------ REMOTE CONTROL -------\n");
	
	for(int i = 0; i < 2; i++){
		std::string aux_phrase = "[slot ";
		aux_phrase.append(std::to_string(i)); 
		aux_phrase.append(" ] ");
		aux_phrase.append(onCommands[i]->getName());
		aux_phrase.append("     ");
		aux_phrase.append(offCommands[i]->getName());
		aux_phrase.append("\n");
		phrase.append(aux_phrase);
	}

	return phrase;
}