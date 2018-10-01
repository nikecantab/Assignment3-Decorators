#pragma once
#include <iostream>
#include "NPC.h"

class Elf :
	public NPC
{

	std::string name;
public:
	Elf(std::string n)
	{
		name = n;
	};

	void render()
	{
		std::cout << name << " is an Elf and a ";
	}
};

