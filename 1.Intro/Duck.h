#ifndef _DUCK_H_
#define _DUCK_H_

class Duck
{
public:
	//Duck(FlyBehavior* flyBehavior, QuackBehavior* quackBehavior);
	Duck();
	~Duck();
	virtual void swim() = 0;
	virtual void display() = 0;
	// This methos come from the interface
	virtual void performFly() = 0;
	virtual void performQuack() = 0;

private:
	//FlyBehavior* m_flyBehavior;
	//QuackBehavior* m_quackBehavior;
};

class Mallock : public Duck
{
public:
	Mallock();
	~Mallock();
	void swim();
	void display();
	// This methos come from the interface
	void performFly();
	void performQuack();
};

class Rubber : public Duck
{
public:
	Rubber();
	~Rubber();
	void swim();
	void display();
	// This methos come from the interface
	void performFly();
	void performQuack();
};
#endif //_DUCK_H_