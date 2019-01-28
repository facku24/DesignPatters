#ifndef _DUCK_H_
#define _DUCK_H_

#include "turkey.h"

class Duck
{
public:
	virtual void quack() = 0;
	virtual void fly() = 0;
};

class MallardDuck : public Duck
{
public:
	void quack();
	void fly();
};

class TurkeyAdapter : public Duck
{
public:
	TurkeyAdapter(Turkey* turkey);
	void quack();
	void fly();
private:
	Turkey* m_turkey;
};
#endif // _DUCK_H_