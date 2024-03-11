#include "classes.h"

int main()
{
	Dish* dish = new Pasta();
	
	bool addSauce = true;
	bool addVeggies = true;

	if (addSauce)
		dish = new SauceDecorator(dish);
	if (addVeggies)
		dish = new VeggiesDecorator(dish);

	dish->print();
}