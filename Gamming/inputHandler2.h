#ifndef _INPUTHANDLER2_H_
#define _INPUTHANDLER2_H_

#include "command2.h"

class InputHandler
{
public:
	InputHandler();
	Command* handleInput(char c);
private:
	Command* buttonA_;
	Command* buttonS_;
	Command* buttonD_;
	Command* buttonW_;
};
#endif // _INPUTHANDLER2_H_