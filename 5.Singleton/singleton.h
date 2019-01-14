#ifndef _SINGLETON_H_
#define _SINGLETON_H_

class Singleton
{
private:
	static Singleton* uniqueInstance;
	int number = 0;
	Singleton();
	~Singleton();

public:
	static Singleton* getInstance();
	void printHello();
	void printNumber();
	void setNumber(int);

};

#endif // _SINGLETON_H_