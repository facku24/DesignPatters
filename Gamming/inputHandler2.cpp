#include "inputHandler2.h"
#include <iostream>

InputHandler::InputHandler()
{
	buttonA_ = new LeftCommand();
	buttonD_ = new RightCommand();
	buttonW_ = new UpCommand();
	buttonS_ = new DownCommand();
}

Command* InputHandler::handleInput(char c)
{
	switch (c)
	{
		case 'a':
			return buttonA_;
		case 's':
			return buttonS_;
		case 'd':
			return buttonD_;
		case 'w':
			return buttonW_;
		default:
			return nullptr;
	}
}