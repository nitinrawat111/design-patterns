#include <iostream>
#include <vector>

class Entity
{
public:
	virtual void add(Entity* obj) {}
	virtual void print() = 0;
};

class File : public Entity
{
public:
	void print()
	{
		std::cout << "File";
	}
};

class Folder : public Entity
{
	std::vector<Entity*> contents;
public:
	void add(Entity* obj)
	{
		contents.push_back(obj);
	}

	void print()
	{
		std::cout << "Folder(";
		for (Entity* obj : contents)
		{
			obj->print();
		}
		std::cout << ")";
	}
};