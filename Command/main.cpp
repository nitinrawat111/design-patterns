#include "GUI.h"

int main()
{
	File* file = new File;
	//
	//
	//
	//
	SaveCommand cmd(file);
	
	SaveButton btn;
	btn.setCommand(&cmd);

	SaveMenuItem menuItem;
	menuItem.setCommand(&cmd);
	//
	//
	//
	//
	//
}