#include<iostream>

class Shape
{
public:
	Shape() = default;
	virtual void printShapeName() = 0;
	virtual Shape* clone() = 0;
};

class Square : public Shape
{
public:
	void printShapeName() override
	{
		std::cout << "Square" << std::endl;
	}

	Shape* clone() override
	{
		return new Square();
	}
};

class Circle : public Shape
{
public:
	void printShapeName() override
	{
		std::cout << "Circle" << std::endl;
	}

	Shape* clone() override
	{
		return new Circle();
	}
};