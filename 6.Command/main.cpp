#include "simpleRemoteControl.h"

int main(int argc, char* argv[])
{
	SimpleRemoteControl remote;
	Light light;
	LightOnCommand lightOn(light);

	remote.setCommand(&lightOn);
	remote.buttonWasPressed();

	GarageDoor door;
	GarageDoorOpenCommand garageDoor(door);

	remote.setCommand(&garageDoor);
	remote.buttonWasPressed();
	return 0;
}