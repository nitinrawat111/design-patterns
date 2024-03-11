#include "Header.h"

int main()
{
	OurWindow obj("Window");
	obj.createWindow(10, 5);
	obj.draw();
	obj.destroy();
}