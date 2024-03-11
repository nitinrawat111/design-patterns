#include "strategies.h"

class Sort
{
	SortingAlgorithm* algo;
public:
	Sort(SortingAlgorithm* givenAlgo)
	{
		algo = givenAlgo;
	}

	void setAlgo(SortingAlgorithm* givenAlgo)
	{
		algo = givenAlgo;
	}

	void sort(std::vector<int>& arr)
	{
		algo->sort(arr);
	}
};