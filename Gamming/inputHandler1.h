#ifndef _INPUTHANDLER1_H_
#define _INPUTHANDLER1_H_

#include "command1.h"

class InputHandler
{
public:
	InputHandler();
	void handleInput(char c);
private:
	Command* buttonA_;
	Command* buttonS_;
	Command* buttonD_;
	Command* buttonW_;
};
#endif // _INPUTHANDLER1_H_