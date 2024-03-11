#include <iostream>

class Response
{
	int status;
	bool complete;
public:
	Response(int x, bool s)
	{
		status = x;
		complete = s;
	}

	int getStatus() { return status; }
	bool isComplete() { return complete; }
};

class ResponseHandler
{
protected:
	ResponseHandler* next;
public:
	ResponseHandler() : next(nullptr) {}

	ResponseHandler* setNextHandle(ResponseHandler* next)
	{
		this->next = next;
		return next;
	}

	virtual void handle(Response& obj) = 0;
};

class StatusHandler : public ResponseHandler
{
public:
	void handle(Response& obj)
	{
		if (obj.getStatus() != 200)
		{
			std::cout << "Error in handling status!" << std::endl;
			return;
		}
		
		if (next)
			next->handle(obj);
		else
			std::cout << "Response handled succesfully by all handlers!" << std::endl;
	}
};

class CompletenessHandler : public ResponseHandler
{
public:
	void handle(Response& obj)
	{
		if (!obj.isComplete())
		{
			std::cout << "Error in handling completeness!" << std::endl;
		}
		
		if (next)
			next->handle(obj);
		else
			std::cout << "Response handled succesfully by all handlers!" << std::endl;
	}
};

