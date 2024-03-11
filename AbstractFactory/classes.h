#include<iostream>

class Shape
{
public:
	Shape() = default;
	virtual void printShapeName() = 0;
};

class Square : public Shape
{};

class OutlineSquare : public Square
{
public:
	void printShapeName() override
	{
		std::cout << "Outline Square" << std::endl;
	}
};

class FilledSquare : public Square
{
public:
	void printShapeName() override
	{
		std::cout << "Filled Square" << std::endl;
	}
};

class Circle : public Shape
{};

class OutlineCircle : public Circle
{
public:
	void printShapeName() override
	{
		std::cout << "Outline Circle" << std::endl;
	}
};

class FilledCircle : public Circle
{
public:
	void printShapeName() override
	{
		std::cout << "Filled Circle" << std::endl;
	}
};