#pragma once
#include <iostream>
/////////////////////////////////////////////////////////////////////////
// Existing code
/////////////////////////////////////////////////////////////////////////
class TargetFormat
{
public:
	virtual void print()
	{
		std::cout << "Second Format!" << std::endl;
	}
};

class Service
{
public:
	void doSomething(TargetFormat* obj)
	{
		obj->print();
	}
};

/////////////////////////////////////////////////////////////////////////
// Service Class works with TargetFormat Only.
// We need a way to make service work with FirstFormat.
/////////////////////////////////////////////////////////////////////////
class FirstFormat
{
public:
	void printSpecial()
	{
		std::cout << "First Format!" << std::endl;
	}
};

class FirstFormatAdapter : public TargetFormat
{
	FirstFormat* obj;
public:
	FirstFormatAdapter(FirstFormat* newObj)
	{
		obj = newObj;
	}

	void print() override
	{
		//Do some conversion/adaptation necessary
		obj->printSpecial();
	}
};
