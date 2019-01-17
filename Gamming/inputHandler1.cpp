#include "inputHandler1.h"
#include <iostream>

InputHandler::InputHandler()
{
	buttonA_ = new LeftCommand();
	buttonD_ = new RightCommand();
	buttonW_ = new UpCommand();
	buttonS_ = new DownCommand();
}

void InputHandler::handleInput(char c)
{
	switch (c)
	{
		case 'a':
			buttonA_->execute();
			break;	
		case 's':
			buttonS_->execute();
			break;	
		case 'd':
			buttonD_->execute();
			break;	
		case 'w':
			buttonW_->execute();
			break;
		default:
			std::cout << "Not Valid Command" << std::endl;
	}
}