#include<iostream>

class Entity
{
	int x;
	Entity()
	{
		x = 10;
	}
	
	static Entity* objPtr;
public:
	static Entity* getInstance()

	{
		if (!objPtr)
		{
			objPtr = new Entity();
		}
		return objPtr;
	}

	void print()
	{
		std::cout << "Value = " << x << std::endl;
	}
};

 Entity* Entity::objPtr = nullptr;