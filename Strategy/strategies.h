#include <iostream>
#include <vector>

class SortingAlgorithm
{
public:
	virtual void sort(std::vector<int>& arr) = 0;
};

class InsertionSort : public SortingAlgorithm
{
public:
	void sort(std::vector<int>& arr)
	{
		std::cout << "Sorting using Insertion Sort" << std::endl;;
	}
};

class BubbleSort : public SortingAlgorithm
{
public:
	void sort(std::vector<int>& arr)
	{
		std::cout << "Sorting using Bubble Sort" << std::endl;;
	}
};

class SelectionSort : public SortingAlgorithm
{
public:
	void sort(std::vector<int>& arr)
	{
		std::cout << "Sorting using Selection Sort" << std::endl;;
	}
};
