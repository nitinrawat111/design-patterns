#include "classes.h"

int main()
{
	std::vector<int> arr = { 1, 22, 4, 10 };

	SelectionSort select;
	Sort obj(&select);
	obj.sort(arr);

	BubbleSort bubble;
	obj.setAlgo(&bubble);
	obj.sort(arr);
	
	InsertionSort insert;
	obj.setAlgo(&insert);
	obj.sort(arr);
}