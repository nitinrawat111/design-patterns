#include "classes.h"
int main()
{
	Entity* ptr = Entity::getInstance();
	ptr->print();
}