#pragma once
#include "shapeClasses.h"

class ShapeFactory
{
public:
	enum ShapeType { SQUARE, CIRCLE};
	static Shape* createShape(ShapeType type)
	{
		Shape* ptr = nullptr;
		if (type == SQUARE)
		{
			ptr = new Square();
		}
		else if(type == CIRCLE)
		{
			ptr = new Circle();
		}
		return ptr;
	}
};