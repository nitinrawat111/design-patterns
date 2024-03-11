#include <iostream>
#include "iterator.h"

template<typename Element> 
class Tree
{
	Element* root;
public:
	//
	//
	//
	// Other Methods
	//
	//
	//
	//
	Iterator<Element>* getDepthFirstIterator()
	{
		TreeDepthFirstIterator<Element>* itr = new TreeDepthFirstIterator<Element>(root);
		return itr;
	}

	Iterator<Element>* getBreadthFirstIterator()
	{
		TreeBreadthFirstIterator<Element>* itr = new TreeBreadthFirstIterator<Element>(root);
		return itr;
	}
};