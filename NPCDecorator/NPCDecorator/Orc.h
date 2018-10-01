#pragma once
#include <iostream>
#include "NPC.h"

class Orc :
	public NPC
{

	std::string name;
public:
	Orc(std::string n) 
	{
		 name = n;
	};

	void render() 
	{
		std::cout << name << " is an Orc and a ";
	}
};

