#include "classes.h"

int main()
{
	Entity* tree = new Folder();
	

	Entity* folder1 = new Folder();
	Entity* folder2 = new Folder();
	Entity* file1 = new File();

	folder1->add(file1);
	tree->add(folder1);
	tree->add(folder2);

	tree->print();
}