#include "simpleRemoteControl.h"
//#include "remoteControl.h"

// only if we have a Undo Command
#include "remoteControlWithUndo.h"

#include <iostream>

int main(int argc, char* argv[])
{
	
	//RemoteControl remoteControl;	

	// only if we have a Undo Command
	RemoteControlWithUndo remoteControl;

	Light livingRoomLight("Living Room");
	GarageDoor garageDoor;

	// Create the On and Off Command for the Living Room
	LightOnCommand livingRoomLightOn(livingRoomLight);
	LightOffCommand livingRoomLightOff(livingRoomLight);

	// Create the Open and Close Command for the Garage
	GarageDoorOpenCommand garageDoorOpen(garageDoor);
	GarageDoorCloseCommand garageDoorClose(garageDoor);

	remoteControl.setCommand(0, &livingRoomLightOn, &livingRoomLightOff);
	remoteControl.setCommand(1, &garageDoorOpen, &garageDoorClose);

	std::cout << remoteControl.toString();

	remoteControl.onButtonWasPushed(0);
	remoteControl.offButtonWasPushed(0);
	
	// only if we have a Undo Command
	remoteControl.undoButtonWasPushed();

	remoteControl.onButtonWasPushed(1);
	remoteControl.offButtonWasPushed(1);

	// only if we have a Undo Command
	remoteControl.undoButtonWasPushed();	
	return 0;
}