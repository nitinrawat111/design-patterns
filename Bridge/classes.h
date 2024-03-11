#include <iostream>

///////////////////////////////////////////////////////
// Different Platform on which GUI can be implemented
///////////////////////////////////////////////////////
class Platform
{
public:
	virtual void printPlatform() = 0;
};

class Windows : public Platform
{
public:
	void printPlatform()
	{
		std::cout << "Windows" << std::endl;
	}
};

class Linux : public Platform
{
public:
	void printPlatform()
	{
		std::cout << "Linux" << std::endl;
	}
};

class GUI
{
protected:
	Platform* platform;
public:
	GUI(bool isWindows)
	{
		if (isWindows)
			platform = new Windows();
		else
			platform = new Linux();
	}
	virtual void print() = 0;
};

class ModernGUI : public GUI
{
public:
	ModernGUI(bool isWindows) : GUI(isWindows) {}
	
	void print() override
	{
		platform->printPlatform();
		std::cout << "Modern GUI" << std::endl;
	}
};

class OldGUI : public GUI
{
public:
	OldGUI(bool isWindows) : GUI(isWindows) {}
	
	void print() override
	{
		platform->printPlatform();
		std::cout << "Old GUI" << std::endl;
	}
};
