#include "Header.h"

int main()
{
	Window obj;
	obj.draw();

	obj.changeState(0);
	obj.draw();
	obj.optimize();
}