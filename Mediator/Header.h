#include <iostream>

class Mediator
{
public:
	virtual void informMediator(Ichildren* sender, std::string data) = 0;
};

class Ichildren
{
protected:
	Mediator* mediatorObj;
public:
};

class Children1 : public Ichildren
{
public:
	Children1(Mediator* ptr)
	{
		mediatorObj = ptr;
	}

	void onClick()
	{
		mediatorObj->informMediator(this, "Clicked Children 1!");
	}
};

class Children2 : public Ichildren
{
public:
	Children2(Mediator* ptr)
	{
		mediatorObj = ptr;
	}

	void onClick()
	{
		mediatorObj->informMediator(this, "Clicked Children 2!");
	}
};


class Parent : public Mediator
{
	Children1 first;
	Children2 second;
public:
	Parent() :
		first(this),
		second(this)
	{}

	void informMediator(Ichildren* sender, std::string data)
	{
		//// Mediate incoming information
	}

};