#include "AppLogic.h"

class Command
{
public:
	virtual void execute() = 0;
};

class SaveCommand : public Command
{
	File* currFilePtr;
public:
	SaveCommand(File* currFile) : currFilePtr(currFile) {}
	
	void execute()
	{
		currFilePtr->save();
	}
};