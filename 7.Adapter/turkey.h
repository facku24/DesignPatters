#ifndef	_TURKEY_H_
#define	_TURKEY_H_

class Turkey
{
public:
	virtual void gobble() = 0;
	virtual void fly() = 0;
};

class WildTurkey : public Turkey
{
public:
	void gobble();
	void fly();
};

#endif	// _TURKEY_H_