template<typename Element>
class Iterator
{
public:
	virtual Element getCurrElement() = 0;
	virtual void moveToNext() = 0;
	virtual bool atEnd() = 0;
};

template<typename Element>
class TreeDepthFirstIterator : public Iterator<Element>
{
	Element* root;
public:
	TreeDepthFirstIterator(Element* ptr)
	{
		root = ptr;
	}

	Element getCurrElement()
	{
		//
		//
		//
		return Element();
	}

	void moveToNext()
	{
		//
		//
		//
	}

	bool atEnd()
	{
		//
		//
		//
	}
};

template<typename Element>
class TreeBreadthFirstIterator : public Iterator<Element>
{
	Element* root;
public:
	TreeBreadthFirstIterator(Element* ptr)
	{
		root = ptr;
	}

	Element getCurrElement()
	{
		//
		//
		//
		return Element();
	}

	void moveToNext()
	{
		//
		//
		//
	}

	bool atEnd()
	{
		//
		//
		//
		return true;
	}
};