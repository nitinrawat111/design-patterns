#include <iostream>
#include "Command.h"
///////////////////////////////////////
// Buttons
///////////////////////////////////////
class Button
{
protected:
	Command* commandObj;
public: 
	virtual void onClick() = 0;
};

class SaveButton :public  Button
{
public:
	void setCommand(Command* ptr)
	{
		commandObj = ptr;
	}

	void onClick()
	{
		commandObj->execute();
	}
};

///////////////////////////////////////
// Menu Items
///////////////////////////////////////
class MenuItem
{
protected:
	Command* commandObj;
public:
	virtual void onClick() = 0;
};

class SaveMenuItem : public MenuItem
{
public:
	void setCommand(Command* ptr)
	{
		commandObj = ptr;
	}

	void onClick()
	{
		commandObj->execute();
	}
};

///////////////////////////////////////
// OUR GUI
///////////////////////////////////////
class GUI
{
public:
	void init()
	{
		File currFile;
		//
		//
		//
		//
		//
		SaveCommand* saveCommmandPtr = new SaveCommand(&currFile);
		
		SaveButton sb;
		sb.setCommand(saveCommmandPtr);

		SaveMenuItem saveItem;
		saveItem.setCommand(saveCommmandPtr);
	}
};