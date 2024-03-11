#pragma once
#include "classes.h"

class ShapeFactory
{
public:
	virtual Shape* createSquare() = 0;
	virtual Shape* createCircle() = 0;
};

class OutlineShapeFactory : public ShapeFactory
{
public:
	Shape* createSquare()
	{
		return new OutlineSquare();
	}

	Shape* createCircle()
	{
		return new OutlineCircle();
	}
};

class FilledShapeFactory : public ShapeFactory
{
public:
	Shape* createSquare()
	{
		return new FilledSquare();
	}

	Shape* createCircle()
	{
		return new FilledCircle();
	}
};

class AbstractShapeFactory
{
public:
	static ShapeFactory* getFactory(bool isFilled)
	{
		if (isFilled) return new FilledShapeFactory();
		else return new OutlineShapeFactory();
	}
};
