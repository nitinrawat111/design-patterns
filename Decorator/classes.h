#include <iostream>

class Dish
{
public:
	virtual void print() = 0;
};

class Pasta : public Dish
{
public:
	void print()
	{
		std::cout << "Pasta";
	}
};

class DishDecorator : public Dish
{
protected:
	Dish* dish;
public:
	DishDecorator(Dish* obj) : dish(obj) {}
};

class SauceDecorator : public DishDecorator
{
public:
	SauceDecorator(Dish* obj) : DishDecorator(obj) {}
	void print()
	{
		dish->print();
		std::cout << " with Sauce";
	}
};

class VeggiesDecorator : public DishDecorator
{
public:
	VeggiesDecorator(Dish* obj) : DishDecorator(obj) {}
	void print()
	{
		dish->print();
		std::cout << " with Veggies";
	}
};