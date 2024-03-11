#include "listeners.h"
#include <unordered_map>

class Manager
{
	std::unordered_map<std::string, EventListener*> events;
public:
	void addListener(const std::string& eventType, EventListener* listener)
	{
		events[eventType] = listener;
	}

	void notifyListener(const std::string& eventType, const std::string& data)
	{
		EventListener* listener = events[eventType];
		listener->receiveEvent(data);
	}
};