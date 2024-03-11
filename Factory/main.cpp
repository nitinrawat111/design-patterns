#include "shapeFactory.h"

class Console
{
	Shape* shapePtr;
public:

	Console(ShapeFactory::ShapeType type)
	{
		shapePtr = ShapeFactory::createShape(type);
	}

	void execute()
	{
		shapePtr->printShapeName();
	}
};

int main()
{
	Console app(ShapeFactory::ShapeType::CIRCLE);
	app.execute();
}