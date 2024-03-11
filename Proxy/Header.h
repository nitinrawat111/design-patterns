#include <iostream>

// Consider the following API provided by an 3rd Party Library
class IWindow
{
public:
	virtual void createWindow(int x, int y) = 0;
	virtual void draw() = 0;
	virtual void destroy() = 0;
};

class Window : IWindow
{
public:
	Window(std::string title) {}
	void createWindow(int x, int y) {}
	void draw() {}
	void destroy() {}
};

// Proxy class which will be used by us in place of Window
class OurWindow : public IWindow
{
	Window* window;
public:
	OurWindow(std::string title)
	{
		window = new Window(title);
	}

	void createWindow(int x, int y) 
	{
		// Some custom code
		window->createWindow(x, y);
		//Some custom code
	}

	void draw()
	{
		//Some custom code
		window->draw();
		//Some custom code
	}

	void destroy()
	{
		//Some custom code
		window->destroy();
		//Some custom code
	}
};