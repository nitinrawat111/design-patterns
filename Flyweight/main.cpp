#include "classes.h"

int main()
{
	NPCFactory factory;

	NPC* obj1 = factory.createNPC(10, 10, true, 2, 2, 2);
	obj1->print();

	NPC* obj2 = factory.createNPC(23, 34, true, 2, 2, 2);
	obj2->print();
}