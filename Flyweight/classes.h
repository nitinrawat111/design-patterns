#include <iostream>
#include <vector>

class NPCType
{
	bool isMale;
	int skinColor;
	int hairColor;
	int outfitCode;
public:
	NPCType(bool isMale, int skinColor, int hairColor, int outfitCode)
	{
		this->isMale = isMale;
		this->skinColor = skinColor;
		this->hairColor = hairColor;
		this->outfitCode = outfitCode;
	}

	bool isEqual(bool isMale, int skinColor, int hairColor, int outfitCode)
	{
		return this->isMale == isMale && this->skinColor == skinColor && this->hairColor == hairColor && this->outfitCode == outfitCode;
	}

	void print()
	{
		std::cout << "isMale=" << isMale << " skin=" << skinColor << " hair=" << hairColor << " outfit=" << outfitCode;
	}
};

class NPC
{
	int x;
	int y;
	NPCType* type;
public:
	NPC(int x, int y, NPCType* type)
	{
		this->x = x;
		this->y = y;
		this->type = type;
	}

	void print()
	{
		std::cout << "(NPC Details) x=" << x << " y=" << y << " ";
		type->print();
		std::cout << std::endl;
	}
};

class NPCFactory
{
	static std::vector<NPCType*> types;
public:
	NPC* createNPC(int x, int y, bool isMale, int skinColor, int hairColor, int outfitCode)
	{
		NPC* newNPC = new NPC(x, y, getNPCType(isMale, skinColor, hairColor, outfitCode));
		return newNPC;
	}

	NPCType* getNPCType(bool isMale, int skinColor, int hairColor, int outfitCode)
	{
		for (NPCType* ptr : types)
		{
			if (ptr->isEqual(isMale, skinColor, hairColor, outfitCode))
			{
				return ptr;
			}
		}
		types.push_back(new NPCType(isMale, skinColor, hairColor, outfitCode));
		return types.back();
	}
};

std::vector<NPCType*> NPCFactory::types = std::vector<NPCType*>();