class WindowState
{
public:
	virtual void draw() = 0;
	virtual void optimize() = 0;
};

class MinimizedState : public WindowState
{
public:
	void draw()
	{

	}

	void optimize()
	{

	}
};

class MaximizedState : public WindowState
{
public:
	void draw()
	{

	}

	void optimize()
	{

	}
};

class Window
{
	WindowState* state;
	int currStateCode; // 0 for minimized, 1 for maximized
public:
	Window()
	{
		currStateCode = 1;
		state = new MaximizedState();
	}

	void draw()
	{
		state->draw();
	}

	void optimize()
	{
		state->optimize();
	}

	void changeState(int stateCode)
	{
		if (stateCode != currStateCode)
		{
			delete state;
			switch (stateCode)
			{
			case 0:
				state = new MinimizedState();
				break;
			case 1:
				state = new MaximizedState();
				break;
			}
		}
	}
};