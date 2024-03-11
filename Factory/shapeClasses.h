#include<iostream>

class Shape
{
public:
	Shape() = default;
	virtual void printShapeName() = 0;
};

class Square : public Shape
{
public:
	void printShapeName() override
	{
		std::cout << "Square" << std::endl;
	}
};

class Circle : public Shape
{
public:
	void printShapeName() override
	{
		std::cout << "Circle" << std::endl;
	}
};