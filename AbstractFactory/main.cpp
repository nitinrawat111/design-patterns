#include "factory.h"

int main()
{
	ShapeFactory* ptr = AbstractShapeFactory::getFactory(true);
	Shape* circlePtr = ptr->createCircle();
	circlePtr->printShapeName();
}