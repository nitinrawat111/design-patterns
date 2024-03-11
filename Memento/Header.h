#include <iostream>
#include <vector>

class Entity
{
	int x, y;
	std::string data;
public:
	void changeData(int a, int b, const std::string& newData)
	{
		x = a;
		y = b;
		data = newData;
	}

	void print()
	{
		std::cout << "Printing Entity: " << x << " " << y << " " << data << std::endl;
	}
};

class EntityMemento
{
	Entity oldEntity;
public:
	EntityMemento(const Entity& obj)
	{
		oldEntity = obj;
	}

	void restoreEntity(Entity& obj)
	{
		obj = oldEntity;
	}
};

class History
{
	std::vector<EntityMemento> oldEntities;
public:
	void addToHistory(const Entity& obj)
	{
		oldEntities.push_back(EntityMemento(obj));
	}

	void restoreFromHistory(Entity& obj)
	{
		if (!oldEntities.empty())
		{
			oldEntities.back().restoreEntity(obj);
			oldEntities.pop_back();
		}
	}
};