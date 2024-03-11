#include "classes.h"

int main()
{
	Shape* obj = new Square();

	Shape* copyObj = obj->clone();
	copyObj->printShapeName();
}