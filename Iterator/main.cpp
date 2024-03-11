#include "tree.h"

class Element
{};


int main()
{
	Tree<Element>* tree = new Tree<Element>();

	Iterator<Element>* itr = tree->getBreadthFirstIterator();
	//
	//
	//
	while (!itr->atEnd())
	{
		itr->getCurrElement();
		itr->moveToNext();
	}
}