#include "builder.h"

int main()
{
	SquareBuilder* ptr = new SquareBuilder();

	MySquareBuildDirector director;
	director.buildMySquare(ptr);

	Square* result = ptr->getSquare();
	result->printShapeName();
}