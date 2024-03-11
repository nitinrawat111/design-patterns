#include "classes.h"

class SquareBuilder
{
	Square* square;
public:
	SquareBuilder()
	{
		reset();
	}

	void setSide(int side)
	{

	}

	void setOutlineColor(int colorCode)
	{

	}

	void setFillColor(int colorCode)
	{

	} 

	void reset()
	{
		square = new Square();
	}

	Square* getSquare()
	{
		Square* ptr = square;
		reset();
		return ptr;
	}	
};

class MySquareBuildDirector
{
public:
	void buildMySquare(SquareBuilder* ptr)
	{
		ptr->reset();
		ptr->setSide(5);
		ptr->setFillColor(2);
		ptr->setOutlineColor(5);
	}
};
