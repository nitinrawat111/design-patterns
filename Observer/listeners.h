#include <iostream>

class EventListener
{
public:
	virtual void receiveEvent(std::string data) = 0;
};

class EmailListener : public EventListener
{
public:
	void receiveEvent(std::string data)
	{
		std::cout << "Data received by email listener/observer!";
		// Do something when Email Event is Emitted
	}
};

class CallListener : public EventListener
{
public:
	void receiveEvent(std::string data)
	{
		std::cout << "Data received by call listener/observer!";
		// Do something when Call Event is Emitted
	}
};